#include <iostream>
using namespace std;

class Rectangle{
public:
    float width;
    float height;

    Rectangle(float w, float h){
    width  = w;
    height = h;
    }

    float area(){
    return width * height;
    }
    float perimeter(){
    return 2 * (width + height);
    }
};

int main(){
    Rectangle r1(5.0 , 3.0);
    Rectangle r2(8.0, 4.0);

    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    return 0;
}
