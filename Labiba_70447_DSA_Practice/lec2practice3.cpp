#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int roll_no;
    double gpa;
    Student(string student_name, int student_roll_no, double student_gpa) {
        name = student_name;
        roll_no = student_roll_no;
        gpa = student_gpa;
    }
    void display_info() {
       cout << "Name: " << name <<endl;
        cout << "Roll No: " << roll_no <<endl;
      cout << "GPA: " << gpa << endl;
    }
};
int main() {
    Student student1("labiba", 70447, 3.85);
    student1.display_info();
    return 0;
}
