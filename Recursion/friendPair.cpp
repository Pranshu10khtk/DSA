#include<iostream>
using namespace std;

int frdPairs(int n){
    // base case
    if(n == 1 || n == 2){
        return n;
    }
    // single friend
    int single = frdPairs(n-1);

    // pair friend
    int pairUp = (n-1)*frdPairs(n-2);

    // recursive call
    return single + pairUp;
}

int main(){
    int n;
    cout<<"Enter number of friend: ";
    cin>>n;

    cout<<"Total Ways: "<<frdPairs(n);
    return 0;
}