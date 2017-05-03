#include <iostream>

using namespace std;

int main() {
    bool isRaining, isGoing;
    cout << "Is it raining today?" << "\n";
    cin >> isRaining;

    cout << "Are you going out today?" << "\n";
    cin >> isGoing;

    if (isRaining) {
        cout << "It is raining today";
    } else if (isGoing) {
        cout << "You are going out today";
    } else {
        cout << "No! It is not raining today";
    }
    return 0;
}