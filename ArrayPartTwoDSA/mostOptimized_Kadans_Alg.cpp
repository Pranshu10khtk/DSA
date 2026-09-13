// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[] = {1, -2, -8, -5, 5, 45, 23};
//     //int arr[]={-2,1,-3,4,-1,2,1,-5,2};
//     int n = 7;
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for(int i = 0; i<n; i++){
//         currSum += arr[i]; // cursum = cursum+arr[i]
//         maxSum = max(currSum, maxSum);
//         if(currSum<0){
//             currSum = 0;
//         }
//     }
//     cout<<"max subarray sum = "<<maxSum<<endl;
// }



// #include<iostream>
// #include<climits>
// using namespace std;

// void kadaneOptimized(int *arr, int n){
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for(int i = 0; i<n; i++){
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//         if(currSum<0){
//             currSum = 0;
//         }
//     }
//     cout<<"max subarray sum = "<<maxSum<<endl;
// }
// int main(){
//     int arr[5] = {-3, 5, 7, -9, 4};
//     int n = sizeof(arr)/sizeof(int);

//     kadaneOptimized(arr, n);
//     return 0;
// }


// maximum product subarray max (leetcode - 152)


// #include<iostream>
// #include<vector>
// using namespace std;

// int maxProduct(vector<int>& nums) { 
// int maxTillNow = nums[0]; 
// int minTillNow = nums[0]; 
// int ans = maxTillNow; 
 
// for (int i=1; i<nums.size(); i++) { 
// int curr = nums[i]; 
 
// int tempMaxTillNow = max(curr, max(maxTillNow*curr, minTillNow*curr)); 
// minTillNow = min(curr, min(maxTillNow*curr, minTillNow*curr)); 
// maxTillNow = tempMaxTillNow; 
 
// ans = max(maxTillNow, ans); 
// } 
 
 
// return ans; 
// }


// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int maxSum(vector<int> &nums){
//     int sum = 0;
//     int maxSum = INT_MAX;
//     for(int i = 0; i < nums.size(); i++){
//         sum += nums[i];
//         maxSum = max(maxSum, sum);
//         if(maxSum<0){
//             sum=0;
//         }
//     }
//     return maxSum;
// }
// int main(){
//     vector<int> nums = {5,4,-1,7,8};
//     for(int num : nums){
//         cout<<"max sum = "<<maxSum(nums)<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSum(vector<int> &nums){
    int sum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        maxSum = max(maxSum, sum);

        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = {5,4,-1,7,8};

    cout << "Max sum = " << maxSum(nums);

    return 0;
}