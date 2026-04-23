#include <iostream>
using namespace std;

class Student {
    int age;

public:
    Student() {
        age = 10;
    }

    void show() {
        cout << "age = " << age;
    }
};

int main() {
    Student obj1;
    obj1.show();

    return 0;
}