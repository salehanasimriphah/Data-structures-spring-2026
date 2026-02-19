#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,4,5,6};
	int* p=arr;
	cout<<"Accessing array elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Element at index "<<i<<" = "<<p[i]<<endl;
	}
}
