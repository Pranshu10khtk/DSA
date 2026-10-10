#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxNoActivity(vector<int> start, vector<int> end) {
    //sort activity on "End" time
    int currEndTime = end[0];
    int count = 1;
    for(int i = 0; i < start.size(); i++) {
        if(start[i] >= currEndTime) {
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}
int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    vector<pair<int, int>> pairs(6, make_pair(0, 0));
    pairs[0] = make_pair(1, 2);
    pairs[1] = make_pair(3, 4);
    pairs[2] = make_pair(0, 6);
    pairs[3] = make_pair(5, 7);
    pairs[4] = make_pair(8, 9);
    pairs[5] = make_pair(5, 9);

    for(int i =0; i< pairs.size(); i++) {
        cout << "A" << i << ": " << pairs[i].first << "," << pairs[i].second <<endl;
    }

    sort(pairs.begin(), pairs.end() ,comp);

    cout <<"===============sorted===========\n";

    for(int i =0; i< pairs.size(); i++) {
        cout << "A" << i << ": " << pairs[i].first << "," << pairs[i].second <<endl;
    }

    cout << "max number of activety = " <<maxNoActivity(start, end);
    return 0;
}