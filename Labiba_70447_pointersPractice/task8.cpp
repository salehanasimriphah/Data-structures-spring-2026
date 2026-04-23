#include<iostream>
using namespace std;

void cube(int &x)
{ 
x= x*x*x;
 }
int main()
{
int y=10;  
cout<<y<<endl;  
cube(y);
cout<<y<<endl;}

