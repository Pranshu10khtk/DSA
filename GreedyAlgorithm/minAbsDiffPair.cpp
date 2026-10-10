#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 1, 3};

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int absdiff = 0;
    for(int i = 0; i < a.size(); i++) {
        absdiff += abs(a[i] - b[i]);
    }

    cout << "min abs diff. = " << absdiff<<endl;
    return 0;
}
