#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string make;
    string model;

    Car(const string& makeValue, const string& modelValue) : make(makeValue), model(modelValue) {
        cout << "Car object created!" << endl;
    }

    void startEngine() {
        cout << "Engine started!" << endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry");
    myCar.startEngine();
    return 0;
}
