#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int> &nums){
        int n = nums.size();

        for(int val : nums){
            int freq = 0;

            for(int el : nums){
                if(el == val){
                    freq++;
                }
            }

            if(freq > n/2){
                return val;   //  return int
            }
        }

        return -1;  //  if no majority element
    }
};

int main(){
    vector<int> nums = {1, 2, 2, 1, 1};

    Solution M;
    int result = M.majorityElement(nums);   //  correct type

    cout << "Majority Element: " << result;

    return 0;
}