#include <iostream>
using namespace std;
int main() 
{
    int original_list[3] = {1, 2, 3};
    int (&copied_list)[3] = original_list;
    copied_list[2] = 4; 
    cout << "original_list: ";
    for (int i = 0; i < 3; i++) 
	{
        cout << original_list[i] << " ";
    }  
	cout <<endl;
    int copied_array[3];
    for (int i = 0; i < 3; i++) 
	{
        copied_array[i] = original_list[i]; 
    }
 copied_array[0] = 99;
  cout << "copied_array: ";
    for (int i = 0; i < 3; i++) 
	{
        cout << copied_array[i] << " ";
    }
    cout << endl;
    cout << "original_list after modifying copy: ";
    for (int i = 0; i < 3; i++) 
	{
        cout<< original_list[i] << " "; 
	}
		cout <<endl; 
return 0;
}
