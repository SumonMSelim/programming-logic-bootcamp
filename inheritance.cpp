#include <iostream>
#include <cmath>

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

class ScientificCalculator : public Calculator {
private:
    float a, b;

public:
    ScientificCalculator(float number1, float number2) : Calculator(number1, number2) {
        a = number1;
        b = number2;
    }

    float power() {
        return pow(a, b);
    }
};

int main() {
    ScientificCalculator calc(5, 2);
    cout << calc.power() << "\n";
    cout << calc.add() << "\n";
    cout << calc.diff() << "\n";

    ScientificCalculator calc1(10, 3);
    cout << calc1.power() << "\n";
    cout << calc1.add() << "\n";
    cout << calc1.diff() << "\n";

    return 0;
}