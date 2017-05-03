#include <iostream>

using namespace std;

int main() {
    int input = 10, output;

    output = ++input; // prefix: 10+1 = 11, output = 11
    cout << "Input: " << input << " Prefix Output: " << output;

    output = input++; // postfix: output = 10; 10+1 = 11
    cout << "Input: " << input << " Postfix Output: " << output;

    return 0;
}