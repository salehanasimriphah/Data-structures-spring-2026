#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void show() {
        cout << "Your name is: " << name << endl;
        cout << "Your age is: " << age << endl;
    }
};

int main() {
    Student obj1;

    obj1.name = "Sana";
    obj1.age = 30;

    obj1.show();

    return 0;
}