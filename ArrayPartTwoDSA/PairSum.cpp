#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int>ans;
    int n = nums.size();

    for(int i = 0; i < n; i++){  //outer loop
        for(int j = i+1; j < n; j++){  //inner loop
            if(nums[i]+nums[j] == target){   //check sum
                ans.push_back(i);
                ans.push_back(j);
                return ans;  //return indices
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int>ans = pairSum(nums, target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    return 0;
}



//optimization (imp code greater then upper code)....

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans; 
//     int n = nums.size();

//     int i = 0, j = n-1;
//     while (i<j){
//         int pairSum = nums[i]+nums[j];
//         if(pairSum > target){
//             j--;
//         }else if(pairSum<target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums = {2, 41, 6, 9, 89,56};
//     int target = 8;
//     vector<int> ans = pairSum(nums, target);
//     cout<<ans[0]<<" , "<<ans[1]<<endl;
//     return 0;
// }