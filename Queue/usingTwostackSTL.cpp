#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:

    // Enqueue
    void enqueue(int x) {
        s1.push(x);
    }

    // Dequeue
    void dequeue() {

        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        // Transfer only when s2 is empty
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Deleted: " << s2.top() << endl;
        s2.pop();
    }

    // Front
    int front() {

        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    // Check empty
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    cout << "Front: " << q.front() << endl;

    q.enqueue(50);

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front: " << q.front() << endl;

    return 0;
}