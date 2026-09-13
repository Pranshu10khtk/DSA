// left Max

// #include<iostream>
// #include<climits>
// using namespace std;

// void trap(int *heights, int n){
//     int leftMax[20000];       // 2*10^4
//     leftMax[0] = INT_MIN;
//     cout<<leftMax[0]<<" ";
//     for(int i=1; i<n;i++){
//         leftMax[i] = max(leftMax[i-1], heights[i-1]);
//         cout<<leftMax[i]<<", ";
//     }
//     cout<<endl;
// }
// int main(){
//     int heights[7] = {4, 2, 0, 6, 3, 2, 5};
//     int n = sizeof(heights)/sizeof(int);

//     trap(heights, n);
//     return 0;
// }


//  right Max
#include<iostream>
#include<climits>
using namespace std;

void trap(int *heights, int n){
    int rightMax[100000];       // 2*10^4
    rightMax[0] = INT_MAX;
    cout<<rightMax[0]<<" ";
    for(int i=1; i<n;i++){
        rightMax[i] = max(rightMax[i-1], heights[i-1]);
        cout<<rightMax[i]<<", ";
    }
    cout<<endl;
}
int main(){
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(int);

    trap(heights, n);
    return 0;
}