#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float gpa;

public:
    
    Student(string n, int r, float g) {
        name = n;
        roll_no = r;
        gpa = g;
    }

    void display_info() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1("Areen", 101, 3.4);

    s1.display_info();

    return 0;
}

