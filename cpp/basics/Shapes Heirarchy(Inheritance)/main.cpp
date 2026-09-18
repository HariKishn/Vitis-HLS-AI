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
};
class Circle : public shape{
public:
    float radius;
    Circle(string colour, float rad) : shape(colour){
        radius = rad; // store it!
    }
    float area(){  // no parameters needed — uses stored radius
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
    float area(){
        return length * breadth;
    }
};
int main(){
    Circle c("Red", 5.0);
    Rectangle r("Blue", 4.0, 3.0);

    c.describe();           // I am a Red shape
    cout << c.area() << endl;   // 78.5

    r.describe();           // I am a Blue shape
    cout << r.area() << endl;   // 12
    return 0;
}
