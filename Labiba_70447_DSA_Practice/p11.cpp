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
cout<<"Value of a :"<<a<<" \n Value of b :"<<b;
 swap(&a, &b);  
 
  cout<<"After Swapping : \n Value of a :"<<a<<" \n Value of b :"<<b;
 
}
