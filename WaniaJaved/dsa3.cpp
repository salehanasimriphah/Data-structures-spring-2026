#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
   queue<string> custQueue;
    // Enqueue  names
    custQueue.push(" Wania");
    custQueue.push("Rihab");
    custQueue.push("Amna");
    custQueue.push("Maheen");

    cout << "Front of queue: " << custQueue.front() <<endl;
    cout << "Back of queue: " << custQueue.back() << endl;
    // Dequeue elements 
    while (!custQueue.empty()) {
        cout << "Dequeuing: " << custQueue.front() << endl;
        custQueue.pop();
        if (!custQueue.empty()) {
            cout << "New front: " << custQueue.front() << endl;
            cout << "New back: " << custQueue.back() << endl;
        } else {
            cout << "Queue is now empty." << endl;
        }
    }
    return 0;
}