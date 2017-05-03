#include <iostream>

using namespace std;

int main() {
    int number1, number2;
    cout << "Please enter number 1" << "\n";
    cin >> number1;

    cout << "Please enter number 2" << "\n";
    cin >> number2;

    if(number1 > number2) {
        cout << number1 << " is greater than " << number2;
    } else {
        cout << number2 << " is greater than " << number1;
    }
    return 0;
}