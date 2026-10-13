#include <iostream>
using namespace std;

class Neuron{
    public:
    float weight;
    float bias;

    Neuron(float w, float b){
        weight = w;
        bias = b;
    }
    float compute(float input) {
        return input * weight + bias;
    }

};

int main()
{
    Neuron n1(0.5, 1.0);
    Neuron n2(0.8, 0.2);

    cout << n1.compute(4.0) << endl;
    cout << n2.compute(4.0) << endl;
}
