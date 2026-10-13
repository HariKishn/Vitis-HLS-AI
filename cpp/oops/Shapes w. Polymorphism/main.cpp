#include <iostream>
using namespace std;

class shape
{
public:
    string colour;

    shape(string c){
        colour = c;
    }
     void describe(){
        cout << "I am a " << colour << " Shape" << endl;
    }
    virtual float area() = 0;
};
class Circle : public shape{
public:
    float radius;

    Circle(string colour, float rad) : shape(colour){
        radius = rad; // store it!
    }
    float area() override{  // no parameters needed — uses stored radius
        return 3.142 * radius * radius;
    }
};
class Rectangle : public shape{
public:
    float length, breadth;
    Rectangle(string colour, float len, float brd) : shape(colour){
        length = len;
        breadth = brd;
    }
    float area() override{
        return length * breadth;
    }
};
int main(){
    shape* shapes[2];
    shapes[0] = new Circle("Red", 5.0);
    shapes[1] = new Rectangle("Blue", 4.0, 3.0);

    for(int i = 0; i < 2; i++) {
        shapes[i]->describe();
        cout << shapes[i]->area() << endl;
    }
    return 0;
}
