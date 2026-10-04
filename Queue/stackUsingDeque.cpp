#include <iostream>
#include <deque>
using namespace std;

class Stack {
    deque<int> dq;

public:

    // Push element
    void push(int x) {
        dq.push_back(x);
    }

    // Remove top element
    void pop() {
        if (!dq.empty()) {
            dq.pop_back();
        }
    }

    // Get top element
    int top() {
        if (!dq.empty()) {
            return dq.back();
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
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;  // 30

    st.pop();

    cout << st.top() << endl;  // 20

    return 0;
}