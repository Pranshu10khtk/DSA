#include<iostream>
#include<vector>
#include<string>
using namespace std;

int gridWays(int row, int col, int n, int m) {

    // base case
    if(row == n-1 && col == m-1){
        return 1; // destination
    }
    if(row >= n || col >= m) {
        return 0;
    }

    // right
    int val1 = gridWays(row, col+1, n, m);

    // down
    int val2 = gridWays(row+1, col, n, m);
    return val1 + val2;
}
int main() {
    int n = 3;
    int m = 3;
    cout<<"gridways: "<<gridWays(0, 0, m, m);
    return 0;
}