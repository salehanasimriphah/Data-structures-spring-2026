#include<iostream>
using namespace std;
int main(){

int x=10, y=20;
int * p1=&x;	
*p1=20;//valid 
p1=&y;	//valid 
cout<<p1<<endl;
}