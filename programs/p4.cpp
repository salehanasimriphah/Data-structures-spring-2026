#include <iostream>
#include <string>
using namespace std;
class Car {
public:
   
    string brand;
    string model;
    int year;

    
    Car(string carBrand,string carModel, int carYear) 
	{
        brand = carBrand;
        model = carModel;
        year = carYear;
    }

    void start() 
	{
        cout << brand << " " << model << " is starting..." <<endl;
    }
};

int main() 
{
   
    Car car1("Toyota", "Corolla", 2020);
    car1.start();
    
    return 0;
}