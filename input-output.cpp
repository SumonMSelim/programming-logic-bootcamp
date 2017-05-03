#include <iostream>

using namespace std;

class A {
    int b;

public:
    void set_data(int value) {
        b = value;
    }

    void get_data() {
        cout << b << "\n";
    }
};

int main() {
    A e, f, g, h;

    e.set_data(140);
    e.get_data();

    f.set_data(99);
    f.get_data();

    g.set_data(38);
    g.get_data();

    h.set_data(28);
    h.get_data();

    return 0;
}