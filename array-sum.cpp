#include <iostream>

using namespace std;

int main() {
    int length, sum = 0;

    cout << "How many value do you want to input?";
    cin >> length; // array size

    int numbers[length]; // array initialization

    cout << "Inputs: " << "\n";
    for (int i = 0; i < length; i++) {
        cin >> numbers[i]; // taking input form user
    }

    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    cout << "Total is: " << sum;

    return 0;
}