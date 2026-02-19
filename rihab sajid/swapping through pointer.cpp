#include <iostream>
using namespace std;
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "BEFORE SWAPPING: " <<endl;
    cout<<"x= "<<x<<" and y= "<<y<<endl;
    swap(&x,&y);
    cout << "AFTER SWAPPING: "<<endl;
    cout<<"x= "<<x<<" and y= "<<y<<endl;
return 0;
}


