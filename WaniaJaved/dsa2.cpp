#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<string> browsehistory;
   
    browsehistory.push("canva.com");
    browsehistory.push("chatgpt.com");
    browsehistory.push("whatsapp.com");
    cout << "Current page: " << browsehistory.top() << endl; 
    browsehistory.pop();
    cout << "Now after popping top is : " << browsehistory.top() << endl; 
    if (!browsehistory.empty()) {
        cout << "Stack is not empty." << endl;
    }
    return 0;
}