#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<string>s;
	s.push("Rihab");
	s.push("ana");
	s.push("mina");
	cout<<"last person that filled the stack is "<< s.top()<<endl;
	s.pop();
	cout<<"Now the person at the top of the stack is "<< s.top()<<endl;
	if(!s.empty())
	{
		cout<<"Stack is not empty"<<endl;
	}
    return 0;   
}

