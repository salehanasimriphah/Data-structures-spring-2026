#include<iostream>
using namespace std;

void swap(int* a,int *b){
	int temp=*a;
	*a=*b;
 *b=temp;
}
int main(){
	int val1,val2;
	cout<<"Enter The Value1:";
	cin>>val1;
	cout<<"Enter The Value2:";
	cin>>val2;
	cout<<"Values Before Swapping: \nValue 1:"<<val1<<"\nValue 2:"<<val2<<endl;
	swap(&val1,&val2);
		cout<<"Values After Swapping: \nValue 1:"<<val1<<"\nValue 2:"<<val2<<endl;
	return 0;
}