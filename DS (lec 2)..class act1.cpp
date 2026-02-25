#include <iostream>
using namespace std;

#define SIZE 5   

class Queue {
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool is_empty() {
        if (front == -1 || front > rear)
            return true;
        else
            return false;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert." << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    
    void dequeue() {
        if (is_empty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return;
        }

        cout << arr[front] << " removed from queue." << endl;
        front++;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();

    if (q.is_empty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    return 0;
}

