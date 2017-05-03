#include <iostream>

using namespace std;

float sum(float number1, float number2);

float diff(float number1, float number2);

float mul(float number1, float number2);

float div(float number1, float number2);

int main() {
    float number1, number2, output;
    int choice;

    cout << "What operation do you want? " << "\n";
    cout << "Enter 1 for Sum " << "\n";
    cout << "Enter 2 for Diff " << "\n";
    cout << "Enter 3 for Mul " << "\n";
    cout << "Enter 4 for Div " << "\n";
    cin >> choice;

    cout << "Please input number1: " << "\n";
    cin >> number1;

    cout << "Please input number2: " << "\n";
    cin >> number2;

    switch (choice) {
        case 1:
            output = sum(number1, number2);
            break;
        case 2:
            output = diff(number1, number2);
            break;
        case 3:
            output = mul(number1, number2);
            break;
        case 4:
            output = div(number1, number2);
            break;
        default:
            output = 0;
    }
    cout << "Result is: " << output;
    return 0;
}

float sum(float number1, float number2) {
    return number1 + number2;
}

float diff(float number1, float number2) {
    return number1 - number2;
}

float mul(float number1, float number2) {
    return number1 * number2;
}

float div(float number1, float number2) {
    return number1 / number2;
}