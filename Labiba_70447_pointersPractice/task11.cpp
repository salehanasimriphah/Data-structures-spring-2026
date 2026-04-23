#include<iostream> 
using namespace std; 
int *min(int &x, int &y)
{
 if (x < y ) return (&x);
 else return (&y); 
 }  
int main()
{ int a, b, *c;
cout << "\nEnter a :"; cin >> a;  
cout << "\nEnter b :";
 cin >> b; 
  c = min(a, b);
cout << "\n The minimum no is :"<< *c; 
}
