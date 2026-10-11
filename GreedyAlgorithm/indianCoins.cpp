#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getChange(vector<int> coins, int val) {
     

    int ans = 0;
    int n = coins.size();

    for(int i = n-1; i >= 0; i--) {
        if(val >= coins[i]) {
            ans += val/coins[i];
            val = val % coins[i];
        }
    }
    cout<<"min coins for change = " << ans <<endl;
    return ans;
}

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int val = 590;
    getChange(coins, val);
    return 0;
}