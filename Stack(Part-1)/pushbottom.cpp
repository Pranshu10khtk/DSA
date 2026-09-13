#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int>& st, int x) {

    // If stack is empty, x becomes bottom
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Remove top
    int temp = st.top();
    st.pop();

    // Recursive call
    pushBottom(st, x);

    // Put removed element back
    st.push(temp);
}

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    pushBottom(st, 5);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}