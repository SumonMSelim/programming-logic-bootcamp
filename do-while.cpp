#include <iostream>

using namespace std;

int main() {
    int number, i = 1;
    cout << "What times table do you want?";
    cin >> number;

    do {
        cout << number << "x" << i << "=" << number * i << "\n";
        i++;
    } while (i <= 10);

    return 0;
}