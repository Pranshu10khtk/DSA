#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Add element
    void enqueue(int value) {
        Node* newNode = new Node(value);

        // If queue is empty
        if (front == NULL) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    // Remove element
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        // If queue becomes empty
        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    // Get front element
    int peek() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return front->data;
    }

    // Display queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
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

    cout << "Queue: ";
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();

    cout << "After dequeue: ";
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}