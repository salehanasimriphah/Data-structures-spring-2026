#include<iostream>
#include<string>
using namespace std;
class Car
{
	private:
		string brand;
		string  model;
    public:
    	Car(string brand,string model)
    	{
    		this->brand=brand;
    		this->model=model;
    		cout<<"The car object is created."<<brand << " " <<model<<endl;
		}
		void drive()
		{
			cout<<"The car of brand "<<brand<<" and model "<<model<<" is moving.";
		}
};
int main()
{
	Car c("Honda","Civic");
	c.drive();
	return 0;
}
