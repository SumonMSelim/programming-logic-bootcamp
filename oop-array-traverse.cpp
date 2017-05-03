#include <iostream>

using namespace std;

class ArrayTraverse {
public:
    int row, column;
    int numbers[100][100];

    void takeInput(int row, int column) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << "Input value for row " << i + 1 << " , column " << j + 1;
                cin >> numbers[i][j];
            }
        }
    }

    void showOutput(int row, int column) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << numbers[i][j] << "\t";
            }
            cout << "\n";
        }
    }
};

int main() {
    int row, column;

    cout << "How many row do you want to for the array?";
    cin >> row;

    cout << "How many column do you want to for the array?";
    cin >> column;

    ArrayTraverse obj;
    obj.takeInput(row, column);
    obj.showOutput(row, column);

    return 0;
}