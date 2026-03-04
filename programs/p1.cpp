#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
  
   string brand;
   string model;
public:
	
    Car(string b,string m) 
	{
        brand = b;
        model = m;
        cout << "Car object created: " << brand << " " << model << endl;
    }
   
    void drive() 
	{
       cout << "The " << brand << " " << model << " is moving." <<endl;
    }
};
int main() 
{
    Car myCar("Toyota", "Corolla");
    myCar.drive();
    return 0;
}