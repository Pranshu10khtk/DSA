#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val) {
        data = val;
        next = NULL;
    }
};

template <class T>
class Stack {
private:
    Node<T>* head;

public:
    Stack() {
        head = NULL;
    }

    // Push
    void push(T val) {
        Node<T>* newNode = new Node<T>(val);

        newNode->next = head;
        head = newNode;
    }

    // Pop
    void pop() {
        if (head == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node<T>* temp = head;
        head = head->next;

        delete temp;
    }

    // Top
    T top() {
        if (head == NULL) {
            cout << "Stack is empty!" << endl;
            return T();
        }

        return head->data;
    }

    // Check empty
    bool empty() {
        return head == NULL;
    }

    // Display
    void display() {
        Node<T>* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Stack: ";
    s.display();

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "After pop: ";
    s.display();

    cout << "Top: " << s.top() << endl;

    return 0;
}