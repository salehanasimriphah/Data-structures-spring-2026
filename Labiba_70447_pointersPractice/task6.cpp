#include<iostream>
using namespace std;
int main(){

int x=10,y=20;
int * const	p3= &x; //const pointer to non-const int
*p3=60; //valid i.e. value can be changed
p3=&y; //invalid as it is a constant pointer, thus address can not be changed

}