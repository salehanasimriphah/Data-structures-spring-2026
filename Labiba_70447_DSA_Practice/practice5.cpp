#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void updateMarks(Student* s, int newMarks) 
{    
s->marks = newMarks; 
 
}
void updateName(string newNam,Student* s){
	s->name=newNam;
}
          int main() 
	{    Student s1 = {"labiba", 75};    
	cout << "Before update: " << s1.name << " has " << s1.marks << " marks." << endl;    

    updateMarks(&s1, 90);
    cout << "After update: " << s1.name << " has " << s1.marks << " marks." << endl;
    
    updateName("Ayesha",&s1);
    cout << "Before Name update: " << s1.name << " has " << s1.marks << " marks." << endl;    
    cout << "After Name update: " << s1.name << " has " << s1.marks << " marks." << endl;    
}
