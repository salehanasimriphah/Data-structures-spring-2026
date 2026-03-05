#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter The size Of array:";
	cin>>size;
	int* arr=new int[size];
	cout<<"Enter The "<<size<<" elements : \n";
	for(int i=0;i<size;i++){
		cout<<"Element "<<i<<" :";
		cin>>arr[i];
		
	}
	
	cout<<"You Entered Following Elements :\n";
	for(int i=0;i<size;i++){
		cout<<"Element "<<i<<" : "<<arr[i]<<endl;
		
	}
	return 0;
}