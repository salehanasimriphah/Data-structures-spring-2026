#include <iostream>
using namespace std;

int main() { 
    char str[] = "Prugram"; 
    char *cp = str;
    cout << "Before changing : " << str << endl;
    str[2] = 'o'; 

    cout << "Using variable : " << str << endl;
    cout << "Using pointer : " << cp << endl;

    return 0;
}
