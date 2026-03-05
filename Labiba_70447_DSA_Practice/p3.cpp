#include<iostream>
using namespace std;
int main(){
	
	int arr[]={30,40,50,60,70,80,90};
	int *ptrArr=arr;
	cout<<"Accessing Elements of array using pointers:\n";
	for(int i=0;i<7;i++){
		cout<<"Integer "<<i<<" "<<*(ptrArr+i)<<endl;
	}
	return 0;
}