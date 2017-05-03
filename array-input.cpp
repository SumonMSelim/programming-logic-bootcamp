#include <iostream>

using namespace std;

int main() {
    int length;

    cout << "How many value do you want to input?";
    cin >> length; // array size

    int numbers[length]; // array initialization

    cout << "Inputs: " << "\n";
    for (int i = 0; i < length; i++) {
        cin >> numbers[i]; // taking input form user
    }

    cout << "Outputs: " << "\n";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << "\n"; // print value from array
    }

    return 0;
}