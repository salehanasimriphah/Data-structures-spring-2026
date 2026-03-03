#include<iostream>
#include<stack>
#include<string >
using namespace std;
int main(){
	stack<string>browsehistory;
	browsehistory.push("google.com");
	browsehistory.push("whatsapp.com");
	browsehistory.push("snapchat.com");
	cout<<"Current page:"<<browsehistory.top()<<endl;
	browsehistory.pop();
	cout<<"Now current page after popping :"<<browsehistory.top()<<endl;
	if(!browsehistory.empty()){
		cout<<"stack is not empty "<<endl;
	}
	return 0;
	
	
	
}
