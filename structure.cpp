#include <iostream>

using namespace std;

struct Student {
    string name;
    int roll;
    char grade;
};

int main() {
    Student sumon;
    sumon.name = "sumon";
    sumon.roll = 1;
    sumon.grade = 'b';

    cout << sumon.name << "\n";
    cout << sumon.roll << "\n";
    cout << sumon.grade << "\n";

    Student rana;
    rana.name = "rana";
    rana.roll = 2;
    rana.grade = 'a';

    cout << rana.name << "\n";
    cout << rana.roll << "\n";
    cout << rana.grade << "\n";
    return 0;
}