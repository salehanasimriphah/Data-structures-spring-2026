#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array:"<<endl;
	cin>>size;
	int*arr=new int[size];
	cout<<"Enter "<<size<<" elements:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout << "You entered:"<<endl;
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }    
    delete[] arr;
}
