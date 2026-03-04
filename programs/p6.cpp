#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string name;
    int accountNumber;
    double balance;
public:
   
    BankAccount() : name("Unknown"), accountNumber(0), balance(0.0) {}
    
    BankAccount(string n, int accNum, double bal): name(n), accountNumber(accNum), balance(bal) {}
   
    BankAccount(const BankAccount& other): name(other.name), accountNumber(other.accountNumber), balance(other.balance) {}
    
    void display() const 
	{
        cout << "Name: " << name<< ", Account Number: " << accountNumber<< ", Balance: " << balance <<endl;
    }
};
int main() 
{
    BankAccount a1; 
    BankAccount a2("Alice", 1001, 500.0);
    BankAccount a3 = a2;
    a1.display();
    a2.display();
    a3.display();
    return 0;
}

