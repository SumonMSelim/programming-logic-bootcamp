#include <iostream>

using namespace std;

int main() {
    bool isRaining = true;
    cout << "Is it raining today?" << "\n";
    cin >> isRaining;

    if(isRaining) {
        cout << "It is raining today";
    } else {
        cout << "No! It is not raining today";
    }
    return 0;
}