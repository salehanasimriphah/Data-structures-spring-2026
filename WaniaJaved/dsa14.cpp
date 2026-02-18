#include <iostream>
using namespace std;

struct Exam {
    string name;
    string status;
};

void updateStatus(Exam* e, string newStat) {
    e->status = newStat;  
}
int main() {
   
    Exam students[3] = {
        {"Amna", "Pass"},
        {"Javeria", "Fail"},
        {"khoala", "Pass"}
    };
    cout << "Before Update: " << students[0].name << " is " << students[0].status << endl;

    updateStatus(&students[0], "Fail");
    cout << "After Update:  " << students[0].name << " is " << students[0].status << endl;

    return 0;
}
