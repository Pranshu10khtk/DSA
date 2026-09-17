#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:

    // Insert element
    void enqueue(int x) {
        s1.push(x);
    }

    // Remove element
    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        // Move elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Deleted: " << s2.top() << endl;
        s2.pop();
    }

    // Return front element
    void front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << "Front: " << s2.top() << endl;
    }

    // Display queue
    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        // If s2 has elements, display from s2
        if (!s2.empty()) {
            stack<int> temp = s2;

            cout << "Queue: ";
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }

            // Display s1 in reverse order
            stack<int> temp2 = s1;
            stack<int> rev;

            while (!temp2.empty()) {
                rev.push(temp2.top());
                temp2.pop();
            }

            while (!rev.empty()) {
                cout << rev.top() << " ";
                rev.pop();
            }
            cout << endl;
        }
        else {
            stack<int> temp = s1;
            stack<int> rev;

            while (!temp.empty()) {
                rev.push(temp.top());
                temp.pop();
            }
            cout << "Queue: ";
            while (!rev.empty()) {
                cout << rev.top() << " ";
                rev.pop();
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    q.front();

    q.enqueue(50);
    q.display();

    return 0;
}