#include <iostream>

using namespace std;

class Calculator {
private:
    float a, b;

public:
    Calculator(float number1, float number2) {
        a = number1;
        b = number2;
    }

    float add() {
        return a + b;
    }

    float diff() {
        return a - b;
    }

    float mul() {
        return a * b;
    }

    float div() {
        return a / b;
    }
};

int main() {
    Calculator calc(10, 20);
    cout << calc.add() << "\n";
    cout << calc.diff() << "\n";
    cout << calc.mul() << "\n";
    cout << calc.div() << "\n";

    return 0;
}