#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() 
{
  
  stack<string> browser_history;
   
    browser_history.push("google.com");
    browser_history.push("openai.com");
    browser_history.push("github.com");
    cout << "Current page: " << browser_history.top() <<endl; 
   
    browser_history.pop();
    cout << "Going back to: " << browser_history.top() << endl; 
   
    if (!browser_history.empty()) 
	{
       cout << "Stack is not empty." <<endl;
    }
    return 0;
}