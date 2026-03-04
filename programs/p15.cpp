#include <iostream>
using namespace std;
int main() 
{ 
    char str[] = "cumputer"; 
    char *cp = str;
    str[1] = 'o'; 

    cout << "Using variable name: " << str << endl;
    cout << "Using pointer variable: " << cp << endl;

    return 0;
}