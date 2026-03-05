#include<iostream>
using namespace std;

struct students
{ 
int rollno;
char name[20];
};  
int main()
{
students s1;
cout<<"Enter roll No:";
cin>> s1.rollno;
cout<<"Enter Name:";
cin>>s1.name; 
students *stu;
stu=&s1; //now stu points to s1 i.e. the address of
// s1 is stored in stu
cout<<stu->rollno<<stu->name;
}
