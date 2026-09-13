#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &nums){
	int n = nums.size();
	bool swapped;
	for(int i = 0; i < n-1; i++){
		swapped = false;
		for(int j = 0; j < n-i-1; j++){
			if(nums[j]>nums[j+1]){
				swap(nums[j], nums[j+1]);
				swapped = true;
			}
		}
		if(!swapped)
		break;
	}	
}
int main(){
	// vector<int> nums = {9, 3, 5, 1, 8, 6};
    vector<int> nums = {1, 2, 3, 4, 5, 6};
	BubbleSort(nums);
	for(int num : nums){
		cout<<num<<" "; 
	}
	return 0;
}


