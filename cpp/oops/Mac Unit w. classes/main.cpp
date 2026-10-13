#include <iostream>
using namespace std;

class MACUnit{
    public:
    float result;

    MACUnit(){
        result = 0;
    }
    void accumulate(float a, float b) {
        result += a * b;
    }
    float getResult() {
    return result;
}
    void reset() {
        result = 0;
    }
};
int main()
{
    MACUnit mac;
    mac.accumulate(2.0, 3.0);
    mac.accumulate(4.0, 5.0);
    cout << mac.getResult() << endl;
    mac.reset();
    cout << mac.getResult() << endl;
    return 0;
}
