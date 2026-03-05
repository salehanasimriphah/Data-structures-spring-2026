#include<iostream>
using namespace std;

	void cube(int &x)
{ x= x*x*x; }
int main()
{int y=10;  
cout<<"Value Before taking cube of it:";
cout<<y<<endl; 
 cube(y); 
 cout<<"Value after taking cube of it:";
 cout<<y<<endl;
 return 0;
}

