#include <iostream>
using namespace std;

class Neuron
{
public:
    float weight, bias;

    Neuron(float w, float b){
        weight = w;
        bias = b;
    }
    float compute(float input){
        return input * weight + bias;
    }
};

class ReLUNeuron : public Neuron {
public:
    ReLUNeuron(float w,float b) : Neuron(w,b){}

    float compute(float input){
        float result = input * weight + bias;
        if(result<0)
            return 0;
        return result;
    }
};
int main() {
    Neuron n(0.5, 1.0);
    ReLUNeuron r(0.5, -3.0);  // bias makes output negative

    cout << n.compute(4.0) << endl;   // 3.0 — normal
    cout << r.compute(4.0) << endl;   // 0   — ReLU killed negative
}
