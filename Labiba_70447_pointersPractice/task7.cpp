#include<iostream>
using namespace std;
int main(){
const int x=10,y=20;
int * const p4=&x; // const pointer to const int  p4=&y;// invalid
*p4=90;// invalid
}