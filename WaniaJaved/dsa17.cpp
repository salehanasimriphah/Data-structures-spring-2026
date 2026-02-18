#include<iostream> 
using namespace std;

 void swap(int *m, int *n)
{ int temp;
 temp = *m; 
 *m = *n; 
 *n = temp; }  
int main()
{ 
int a = 5, b = 6;
cout << "Value of a : " << a << " b : "<< b << endl;

 swap(&a, &b); 
 
cout<< " After swapping value of a : " << a <<  " b : "  << b;
return 0;
}
