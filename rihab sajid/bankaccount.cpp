#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;
public:
    BankAccount()
	{
		name="Unknown";
		accountNumber=0;
		balance=0.0;
	} 
    BankAccount(string n, int accnum, double bal)
    {
    	name=n;
		accountNumber=accnum;
		balance=bal;
	}
    BankAccount(const BankAccount& other)
    {
        name=other.name;
		accountNumber=other.accountNumber;
		balance=other.balance; 
	}
    void display()
        {
		cout << "Name: " << name<<endl;
        cout << "Account Number: " << accountNumber<<endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
	BankAccount a1; 
    BankAccount a2("Alia", 1091, 5870.0); 
    BankAccount a3 = a2; 
    a1.display();
    a2.display();
    a3.display();
    return 0;
}


