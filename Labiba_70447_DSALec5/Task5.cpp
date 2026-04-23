#include <iostream>
using namespace std;

class Demo {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double a) {
        cout << "Double: " << a << endl;
    }
};

int main() {
    Demo obj;

    obj.show(5);
    obj.show(5.5);

    return 0;
}