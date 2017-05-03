#include <iostream>

using namespace std;

int main() {
    int row, column;

    cout << "How many row do you want to for the array?";
    cin >> row;

    cout << "How many column do you want to for the array?";
    cin >> column;

    int numbers[row][column]; // array initialization

    cout << "Inputs: " << "\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Input value for row " << i + 1 << " , column " << j + 1;
            cin >> numbers[i][j];
        }
    }

    cout << "Outputs: " << "\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << numbers[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}