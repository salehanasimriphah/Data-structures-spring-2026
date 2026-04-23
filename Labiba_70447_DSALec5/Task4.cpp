#include <iostream>
using namespace std;

class Student {
    int age;

public:
    Student(int a) {
        age = a;
    }

    void show() {
        cout << "age = " << age;
    }
};

int main() {
    Student obj(10);
    obj.show();

    return 0;
}