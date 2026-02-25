#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    string model;
public:
    
    Car(string b , string m) {
        brand = b;
        model = m;
        cout << "Car brand : " << brand <<" Car model : "<< " " << model << endl;
    }
    void drive() {
        cout << "The " << brand << " " << model << " is moving." << endl;
    }
};
int main() { 
    Car c("Honda ", "Civic");
    c.drive();
    return 0;
}
