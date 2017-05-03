#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "What times table do you want?";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        cout << number << "x" << i << "=" << number * i << "\n";
    }

    return 0;
}