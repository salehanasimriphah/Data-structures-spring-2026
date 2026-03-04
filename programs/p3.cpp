#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() 
{
   queue<string> customerQueue;
    
    customerQueue.push("Alice");
    customerQueue.push("Bob");
    customerQueue.push("Charlie");
    customerQueue.push("Diana");
   
   cout << "Front of queue: " << customerQueue.front() <<endl;
    cout << "Back of queue: " << customerQueue.back() <<endl;
   
    while (!customerQueue.empty())
	{
        cout << "Dequeuing: " << customerQueue.front() <<endl;
        customerQueue.pop();
        if (!customerQueue.empty()) 
		{
            cout << "Now front: " << customerQueue.front() <<endl;
            cout << "Now back: " << customerQueue.back() <<endl;
        } else
		{
            cout << "Queue is now empty." <<endl;
        }
    }
    return 0;
}
