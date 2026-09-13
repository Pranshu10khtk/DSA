
// // Question - 1
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int start, int end, int target){
//     // base case
//     if(start > end){
//         return -1;
//     }
//     int mid = (start + end)/ 2;

//     if(arr[mid ] == target){
//         return mid;
//     }
//     else if(arr[mid] > target){ //left half call
//         return binarySearch(arr, start , mid-1, target);
//     }
//     else{ //right half call
//         return binarySearch(arr, mid+1, end, target);
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = 7;
//     cout<<binarySearch(arr, 0, n - 1, 5)<<endl;
//     return 0;
// }



// Question - 2
// #include<iostream>
// using namespace std;

// int findOccurance(int arr[], int n, int i, int target){ // i --->  current index; 
//     // base case
//     if(i == n){
//         return 1;
//     }
//     // current element
//     if(arr[i] == target){
//         cout<< i << " ";
//     }
//     // recursion call
//     return findOccurance(arr, n, i+1, target); // move to next index, i+1 ---> increses index by 1
// }
// int main(){
//     int arr[] = {1, 2, 3, 2, 5, 2, 7};
//     findOccurance(arr, 7, 0, 2);
//     return 0;
// }


// leetCode Premimum Question
#include<iostream>
using namespace std;
int substringConti(string s, int i, int j){
    if(s[i] == s[j]){
        
    }
}


