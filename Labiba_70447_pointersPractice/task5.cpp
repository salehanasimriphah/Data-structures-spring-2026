#include<iostream>
using namespace std;
int main(){
	const int x=10;  int y=20;
const	int * p2=&x; // non-const pointer to const int
*p2=50; //invalid i.e. value can not be changed 
 p2=&y; // valid i.e. address stored can be changed
*p2=100;// invalid as p2 is pointing to a constant integer
}