#include <iostream>

using namespace std;

int main() {
    int number, output = 10;
    cout << "Please enter an integer number..";
    cin >> number;

    output += number; // output = output + number
    cout << output;

    return 0;
}