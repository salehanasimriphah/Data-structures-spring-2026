#include <iostream>
using namespace std;
int main()
 {    
  
char* menu[] = {"Golaab Jaamun","chocolates", "Biscuits","Chai","parata"};
    cout << "Today's Menu:\n";
    for (int i = 0; i < 5; i++) 
	{
	        cout << "- " << menu[i] << endl;
	    }
    return 0;
}
