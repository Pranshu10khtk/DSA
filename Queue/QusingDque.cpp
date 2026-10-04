#include <iostream>
#include <deque>
using namespace std;

class Queue {
    deque<int> dq;

public:

    // Insert element
    void push(int x) {
        dq.push_back(x);
    }

    // Remove element
    void pop() {
        if (!dq.empty()) {
            dq.pop_front();
        }
    }

    // Get front element
    int front() {
        if (!dq.empty()) {
            return dq.front();
        }
        return -1;
    }

    // Check empty
    bool empty() {
        return dq.empty();
    }

    // Get size
    int size() {
        return dq.size();
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;  // 10

    q.pop();

    cout << q.front() << endl;  // 20

    return 0;
}