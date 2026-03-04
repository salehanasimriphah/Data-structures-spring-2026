#include <iostream>
using namespace std;
struct Exam 
{
    string name;
    string status;
};
void updateStatus(Exam* e, string newStatus) 
{
    e->status = newStatus; 
}
int main() 
{
    Exam students[3] = {{"Alice", "Pass"},{"Jack", "Fail"},{"June", "Pass"}};
    cout << "Before Update: " << students[0].name << " is " << students[0].status << endl;
    
    updateStatus(&students[0], "Fail");
    cout << "After Update:  " << students[0].name << " is " << students[0].status << endl;

    return 0;
}
