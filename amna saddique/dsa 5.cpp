#include <iostream>

using namespace std;
class Robot {
public:
    string name;
    string model;
    
    Robot(string robotName, string robotModel) {
        name = robotName;
        model = robotModel;
    }
};
int main(){
	Robot r1(" mesco "," integrated");
	cout<< r1.name << " " << r1.model << endl;
	return 0;
}
