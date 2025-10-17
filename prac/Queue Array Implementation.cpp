#include <iostream>
using namespace std;

#define MAX_SIZE 101   // queue size

class Queue {
private:
    int arr[MAX_SIZE];  
    int front;          // Index of front element
    int rear;           // Index of rear element

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) { // push
        if (rear == MAX_SIZE - 1) { // check if queue already full
            cout << "Error: Queue Overflow\n";
            return;
        }

        // If queue is empty
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else {
            rear++; // Move rear forward
        }

        arr[rear] = x; // insert x
    }

    void dequeue() { // pop
        if (isEmpty()) { // check if already empty
            cout << "Error: Queue Underflow\n";
            return;
        }

        if (front == rear) { // if only 1 element in queue
            front = rear = -1;
        } else {
            front++; // Move front forward
        }
    }

    int Front() { // returning front / head
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    int size() {
        if (isEmpty()) return 0;
        return (rear - front + 1);
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display(); // Output: 10 20 30 40

    cout << "Front element: " << q.Front() << endl;

    q.dequeue();
    q.display(); // Output: 20 30 40

    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue(); // Try to remove extra → Underflow

    return 0;
}
