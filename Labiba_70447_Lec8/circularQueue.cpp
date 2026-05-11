#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int frontIndex;
    int rear;

public:
    Queue() {
        frontIndex = 0;
        rear = -1;
    }

    // enqueue
    void enqueue(int val) {
        if (rear == 99) {
            cout << "Queue Overflow\n";
            return;
        }
        rear++;
        arr[rear] = val;
    }

    // dequeue
    void dequeue() {
        if (frontIndex > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        frontIndex++;
    }

    // front element
    int front() {
        if (frontIndex > rear) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[frontIndex];
    }

    // check empty
    bool empty() {
        return (frontIndex > rear);
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;

    q.dequeue();

    cout << "Front after dequeue: " << q.front() << endl;

    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}