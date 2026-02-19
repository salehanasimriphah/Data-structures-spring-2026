#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int*p =&x;
	cout<<"Value of x is "<<x<<endl;
	cout<<"Value of x is "<<*p<<endl;
	cout<<"Address of x is "<<p<<endl;
	cout<<"Address of x is "<<&x<<endl;
	return 0;
}
