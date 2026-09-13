#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextGreaterEl(vector<int> arr, vector<int>& ans) {
    stack<int> s;

    int idx = arr.size() - 1;

    s.push(arr[idx]);
    arr[idx] = -1;

    for(idx = idx - 1; idx >= 0; idx--) {
        int current = arr[idx];

        while(!s.empty() && current >= s.top()) {
            s.pop();
        }

        if(s.empty()) {
            arr[idx] = -1;
        }
        else {
            arr[idx] = s.top();
        }

        s.push(current);
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreaterEl(arr, ans);

    return 0;
}