#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool duplicateParentheses(string str) {
    stack<int> s;

    for(char ch: str) {
        if(ch == '(') {
            int count = 0;
            while(!s.empty() && s.top() != '(') {
                s.pop();
                count++;
            }
            if(!s.empty()) {
                s.pop();
            }
            if(count == 0) {
                return true;
            }
        }
        else{
            s.push(ch);
        }
    }
    return false;
}

int main() {

    string str1 = "((a+b))";
    string str2 = "(a+b)";

    cout << boolalpha;
    cout << duplicateParentheses(str1) << endl;
    cout << duplicateParentheses(str2) << endl;

    return 0;
}