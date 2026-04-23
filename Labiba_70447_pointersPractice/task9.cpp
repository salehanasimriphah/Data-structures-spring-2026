#include<iostream>
using namespace std;

int &cube(int &x)
{ 
x= x*x*x;
 return x;
}
int main(){ int y=10, num=5;  
cube(y) =num;
  cout<<y<<endl;  
  cout<<num<<endl;
  }

