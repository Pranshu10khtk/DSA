// #include<iostream>
// #include<vector>
// using namespace std;

// void InsertionSortAlgo(vector<int> &nums){
//     int n = nums.size();
//     for(int i = 1; i < n; i++){
//         int key = nums[i];
//         int j = i-1;    //  j is a previous number
//         while(j>=0 && nums[j]>key){
//             swap(nums[j], nums[j+1]);
//             j--;
//         }
//         nums[j+1]=key;   
//     }
// }
// int main(){
//     vector<int> nums = {5, 4, 1, 3, 2};
//     InsertionSortAlgo(nums);

//     for(int num : nums){
//         cout<<num<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &nums){
    int n = nums.size();
	for(int i =1; i<n; i++){
		int key = nums[i];
		int prev = i-1;
		while(prev >= 0 && nums[prev]>key){
			swap(nums[prev], nums[prev+1]);
			prev--;
		}
		nums[prev] = key;
	}
}
int main(){
    vector<int> nums = {5, 4, 1, 3, 2};
    insertion(nums);

    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;
}
