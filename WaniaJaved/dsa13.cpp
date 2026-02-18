#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void updateMarks(Student* s, int Newmarks) 
{    
s->marks = Newmarks;  
}
          int main() 
	{    Student s1 = {"Wania", 100};    
	cout << "Before update: " << s1.name << " has " << s1.marks << " marks." << endl;    
	
    updateMarks(&s1, 90);
    cout << "After update: " << s1.name << " has " << s1.marks << " marks." << endl;
    return 0;
}
