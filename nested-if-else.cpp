#include <iostream>

using namespace std;

int main() {
    string day;
    string is_going;

    cout << "What day is today?" << "\n";
    cin >> day;

    if (day == "Fri" || day == "Sat" || day == "fri" || day == "sat") {
        cout << "Are you going out today?" << "\n";
        cin >> is_going;

        if (is_going == "Yes" || is_going == "yes") {
            cout << "Have a good tour!";
        } else {
            cout << "Have a good sleep!";
        }
    } else {
        cout << "Go to class!";
    }
    return 0;
}