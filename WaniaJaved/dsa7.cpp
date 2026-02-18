#include <iostream>
#include <string>
using namespace std;
class Bankacc {
private:
    string name;
    int accnum;
    double balance;
public:
    // Default constructor
     Bankacc() {
        name = " Unknown";
        accnum = 0;
        balance= 0.00;
    }
    // Parameterized constructor
      Bankacc(string n, int num, double b) {
        name = n;
        accnum = num;
        balance= b;
    }
    // Copy constructor
   Bankacc(const Bankacc& other) {
        name = other.name;
        accnum = other.accnum;
        balance= other.balance;
    }
    void display() {
    cout << "Name: " << name << ", Account Number: " << accnum<< ", Balance: " << balance << endl;
    }
};
int main() {
    Bankacc a1; 
    Bankacc a2("Wania ", 07736, 2599.0); 
    Bankacc a3 = a2; 
    a1.display();
    a2.display();
    a3.display();
    return 0;
}
