#include <iostream>
using namespace std;
int main()
{ 
    int arr[3]={10,20,30};
    int*p =arr;
    cout<<"Pointer address initially: "<<p<<endl;
    cout<<"Value at ptr: "<<*p<<endl;
    p++;
    cout<<"New address after p++ is: "<<p<<endl;
    cout<<"New value after p++: "<<*p<<endl;
    p++;
    cout<<"New address after p++ is: "<<p<<endl;
    cout<<"New value after p++: "<<*p<<endl;
    return 0;
}
