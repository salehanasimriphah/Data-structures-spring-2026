#include <iostream>
#include<string >
using namespace std;

class Car {
public:

    string brand;
    string model;
    int year;

   
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    
    void start() {
        cout << brand << " " << model << " is starting" << endl;
    }
};

int main() {

    Car c(" BMW", "M5", 2026);
    c.start();
    return 0;
}