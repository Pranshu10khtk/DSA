#include<iostream>
using namespace std;

int tileP(int n){
    if(n==0 || n ==1){
        return 1;
    }
    // vertical
    int ans1 = tileP(n-1);
    
    // horizontal
    int ans2 = tileP(n-2);

    // add tiles
    return ans1 + ans2;
}

int main(){
    int n = 3;

    cout<<tileP(5)<<endl;
    return 0;
}