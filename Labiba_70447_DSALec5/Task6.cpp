#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string name;

    Student() {
        age = 0;
        name = "Unknown";
    }

    Student(int a, string n) {
        age = a;
        name = n;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2(20, "Ali");

    s1.display();
    s2.display();

    return 0;
}