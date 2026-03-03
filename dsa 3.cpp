#include <iostream>

using namespace std;
class car{
public:
	string model;
	string brand;
	int year;
	
	car(string carmodel,string carbrand,int caryear){
		model=carmodel;
		brand=carbrand;
		year=caryear;
		
	}
	void start(){
		cout<<brand<<" "<<model<<" is starting "<<endl;
		
	}

};
int main() {
   car c1("carolla","Toyota",2020);
   c1.start();
    return 0;
}
