#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int>& st, int x) {
    
    if (st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    pushBottom(st, x);

    st.push(temp);
}

void reverseStack(stack<int>& st) {

    if (st.empty()) {
        return;
    }

    int temp = st.top();
    st.pop();

    // Reverse remaining stack
    reverseStack(st);

    // Put removed element at bottom
    pushBottom(st, temp);
}

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}


