#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first; // descending on ratio
}

int fractionKnapsack(vector<int> val, vector<int> weight, int w) {
    int n = val.size();
    vector<pair <double, int>> ratio(n, make_pair(0.0, 0)); // pair(ratio, index)

    for(int i =0; i <n; i++) {
        double r = val[i] /(double) weight[i]; // here r = ratio 
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare); // descending order
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int idx = ratio[i].second;
        if(weight[idx] <= w) {
            ans += val[i];
            w -= weight[i];
        }
        else {
            // fractional add or last item
            ans += ratio[i].first * w;
            w = 0;
            break;;
        }
    }
    cout << "max value = " << ans << endl;
    return ans;
}

int main(){
    vector<int> val = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int w = 50; // capacity
    fractionKnapsack(val, weight, w);
    
    return 0;
}