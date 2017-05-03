#include <iostream>

using namespace std;

int main() {
    int number1, number2, sum, diff, mul, div, mod;
    // inputs
    number1 = 100;
    number2 = 20;

    sum = number1 + number2; // plus
    diff = number1 - number2; // minus
    mul = number1 * number2; // multiplication
    div = number1 / number2; // divide
    mod = number1 % number2; // modulus

    // outputs
    cout << "Sum: " << sum << "\n";
    cout << "Diff: " << diff << "\n";
    cout << "Mul: " << mul << "\n";
    cout << "Div: " << div << "\n";
    cout << "Mod: " << mod << "\n";
    return 0;
}