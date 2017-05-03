#include <iostream>

using namespace std;

int main() {
    int input = 10, output;

    output = --input; // prefix: input = 10-1 = 9, output = 9
    cout << "Input: " << input << " Prefix Output: " << output;

    output = input--; // postfix: output = 9; input = 9 - 1 = 8
    cout << "Input: " << input << " Postfix Output: " << output;

    return 0;
}