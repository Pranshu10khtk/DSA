#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;

    // Push
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Top
    cout << "Top: " << s.top() << endl;

    // Pop
    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    // Empty
    cout << "Is empty? " << s.empty() << endl;

    return 0;
}


// Your code → STL equivalent

// Your implementation      	STL
// Stack<int> s;	           stack<int> s;
// s.push(10)	               s.push(10)
// s.pop()	                   s.pop()
// s.top()	                   s.top()
// s.empty()                	s.empty()

// Node	STL handles it internally
// head	STL handles it internally