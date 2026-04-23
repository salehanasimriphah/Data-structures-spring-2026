#include<iostream>
using namespace std;
struct student
{ int rollno;
char name[20];
};
int main()
{ 
student *stu;
stu = new student; 
stu->rollno=1;
strcpy(stu->name,"  Ramesh");
cout<<stu->rollno<<stu->name;
}
