#include <iostream>
using namespace std;
int main() 
{    
int arr[3] = {10, 20, 30};    
int* ptr = arr;  
cout << "Initial pointer address: " << ptr << endl;    
cout << "Value at ptr: " << *ptr << endl;    
ptr++;    
cout << "After ptr++ address: " << ptr << endl;    
cout << "Value at new ptr: " << *ptr << endl;    
return 0;
}
