#include <iostream>
using namespace std;
int main(){
	int value=67;
	int *ptrToVal=&value;
	cout<<"The value Using variable name : "<<value<<endl;
	cout<<"The value Using pointer : "<<*ptrToVal<<endl;
	cout<<"The Address Using & : "<<&value<<endl;
		cout<<"The Address Using pointers : "<<ptrToVal<<endl;
		
		return 0;

}