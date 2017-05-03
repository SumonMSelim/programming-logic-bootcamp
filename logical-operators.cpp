#include <iostream>

using namespace std;

int main() {
    string day;
    string isGoing;

    cout << "What day is today?" << "\n";
    cin >> day;

    cout << "Are you going out today?" << "\n";
    cin >> isGoing;

    if (day == "Friday" && isGoing == "No") {
        cout << "Have a good sleep!";
    } else if (day == "Friday" || isGoing != "No") {
        cout << "Have a good tour!";
    } else {
        cout << "Go to class!";
    }
    return 0;
}