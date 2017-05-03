#include <iostream>

using namespace std;

int main() {
    bool isRaining = true;
    string output;
    cout << "Is it raining today?" << "\n";
    cin >> isRaining;

    output = isRaining ? "It is raining today" : "No! It is not raining today";
    cout << output;

    return 0;
}