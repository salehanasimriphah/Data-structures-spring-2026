#include<iostream> 
using namespace std; 
void swap(int *m, int *n)
{ 
int temp; 
temp = *m; 
*m = *n; 
*n = temp;
 }  
int main()
{ int a = 5, b = 6;
cout << "\n Value of a :"<< a << "and b :"<< b; 
 swap(&a, &b); //we are passing address of a and b 
  cout << "\n After swapping value of a :"<< a <<  "and b :" << b;
}
