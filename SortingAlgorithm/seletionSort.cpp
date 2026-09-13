#include<iostream>
#include<vector>
using namespace std;
void selectionSortAlgo(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        int min_Idx = i;
        for(int j = i+1; j < n; j++){
            if(nums[j] < nums[min_Idx]){
                min_Idx = j;
            }
            
        }
        swap(nums[i] , nums[min_Idx]);
    }
}
int main(){
    vector<int> nums = {5, 4, 1, 3, 2};
    selectionSortAlgo(nums);
    for(int &num : nums){
        cout<<num<<" ";
    }
    return 0;
}