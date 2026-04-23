#include <iostream>
using namespace std;
int main()
 {    
 
char* menu[] = {"Biryani","Karahi", "Nihari","Kebab","Raita"};

    cout << "Today's Menu:\n";
    
    for (int i = 0; i < 5; i++) 
	{
	        cout << 1+i <<" - "<< menu[i] << endl;
	    }
    return 0;
}
