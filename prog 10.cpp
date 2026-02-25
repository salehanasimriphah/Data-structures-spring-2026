#include <iostream>
using namespace std;
int main() {
    int list[3] = {1, 2, 3};
   
    int (&copylist)[3] = list;
    copylist[2] = 4;  
    cout << "original_list: ";
    for (int i = 0; i < 3; i++) {
        cout << list[i] << " ";
    }  
   
    int copiedarray[3];
    for (int i = 0; i < 3; i++) {
        copiedarray[i] = list[i];  
    }
 copiedarray[0] = 99;
    std::cout << "copied_array: ";
    for (int i = 0; i < 3; i++) {
        std::cout << copiedarray[i] << " ";
    }

    cout << "List after modifying copy: ";
    for (int i = 0; i < 3; i++) {
        cout<< list[i] << " "; }
		cout <<endl; 
return 0;
}
