#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		float gpa;
		
		student(string studentname,int studentrollno,float studentgpa){
			name=studentname;
			rollno= studentrollno;
			gpa=studentgpa;
			
		}
		void displayinfo(){
			cout<<"Name "<<name<<endl;
          cout << "Roll No: " << rollno << endl;
          cout << "GPA: " << gpa << endl;
			
		}
};
int main(){
	student s("Amna ",69473,3.76);
	s.displayinfo();
}
