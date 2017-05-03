#include <iostream>

using namespace std;

int main() {
    int number, i = 1;
    cout << "What times table do you want?";
    cin >> number;

    while (i <= 10) {
        cout << number << "x" << i << "=" << number * i << "\n";
        i++;
    }

    return 0;
}