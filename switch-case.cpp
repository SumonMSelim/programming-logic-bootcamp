#include <iostream>

using namespace std;

int main() {
    int day;
    string output;
    cout << "What number of day of week is this?" << "\n";
    cin >> day;

    switch (day) {
        case 1:
            output = "Sunday";
            break;
        case 2:
            output = "Monday";
            break;
        case 3:
            output = "Tuesday";
            break;
        case 4:
            output = "Wednesday";
            break;
        case 5:
            output = "Thursday";
            break;
        case 6:
            output = "Friday";
            break;
        case 7:
            output = "Saturday";
            break;
        default:
            output = "Sorry, invalid input";
    }

    cout << output;
    return 0;
}