#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    double gpa;
    
    Student(string n, int r, double g) {
        name = n;
        rollno = r;
        gpa = g;
    }
    void display() {
       cout << "Name: " << name << endl;
       cout << "Roll No: " << rollno << endl;
       cout << "GPA: " << gpa << endl;
    }
};
int main() {
    
    Student s1("Wania", 69395, 4.00);
   
    s1.display();
    return 0;
}