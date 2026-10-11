#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int, int>> jobs) {
    sort(jobs.begin(), jobs.end(), compare);

    //first -> deadline, second -> profit

    int profit = 0;
    int safeDeadline = 1;
    for(int i = 0; i < jobs.size(); i++) {
        if(jobs[i].first >= safeDeadline) {
            profit += jobs[i].second;
            safeDeadline++;
        }
    }
    cout << "max profit = " << profit <<endl;
    return profit;
}

int main(){
    int n = 4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    jobs[0] = {4, 20};
    jobs[1] = {1, 10};
    jobs[2] = {1, 40};
    jobs[3] = {1, 30};

    maxProfit(jobs);

    return 0;
}