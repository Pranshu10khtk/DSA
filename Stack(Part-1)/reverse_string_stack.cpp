#include <iostream>
#include <stack>
using namespace std;

string reverseString(string s) {

    stack<char> st;

    // Push all characters
    for (char ch : s) {
        st.push(ch);
    }

    string ans = "";

    // Pop characters
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string s = "hello";

    cout << reverseString(s);

    return 0;
}