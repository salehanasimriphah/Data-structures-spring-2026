#include <iostream>
#include <string>
using namespace std;
class Student 
{
private:
    string name;
    int rollno;
    double gpa;
public:
    Student(string student_name, int student_roll_no, double student_gpa) {
        name = student_name;
        rollno = student_roll_no;
        gpa = student_gpa;
    }
    void display_info()
	 {
        cout << "Name: " << name << std::endl;
        cout << "Roll No: " << rollno << std::endl;
        cout << "GPA: " << gpa << std::endl;
    }
};
int main() 
{
    Student student1("Alisha", 1019, 3.85);
    student1.display_info();
    return 0;
}


