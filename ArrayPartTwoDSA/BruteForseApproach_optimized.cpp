

// the time compexcity of optimized maxsum is 0(n^2)
// maxsum optimized

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, -5, -90, 45, 6};
//     int n = 7;
//     int maxsum=INT_MIN;
//     for(int start = 0; start < n; start++){
//         int currsum = 0;
//         for(int end = start; end < n; end++){
//             currsum += arr[end];
//             maxsum = max(currsum, maxsum);
//         }
        
//     }
//      cout<<"max subarray sum = "<<maxsum<<endl;
//     return 0;
// }




// #include<iostream>
// #include<climits>
// using namespace std;

// void optimizeApproach(int *arr, int n){
//     int maxSum = INT_MIN;
//     for(int start = 0; start < n; start++){
//         int currsum = 0;
//         for(int end = start; end < n; end++){
//             currsum += arr[end];
//             maxSum = max(currsum, maxSum);
//          }
//         }
//       cout<<"max subarray sum = "<<maxSum<<endl;
// }
// int main(){
//     int arr[7] = {1, 2, 3, -5, -90, 45, 6};
//     int n = sizeof(arr)/sizeof(int);

//     optimizeApproach(arr, n);
//     return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;

// void bruteOptimized(int *arr, int n){
//     int maxSum = INT_MIN;
//     for(int start=0; start<n; start++){
//         int sum = 0;
//         for(int end = start; end<n; end++){
//             sum += arr[end];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout<<"max subaaray sum = "<<maxSum<<endl;
// }
// int main(){
//     int arr[7] = {2, -3, -5, 6, 7, 9,1};
//     int n = sizeof(arr)/sizeof(int);

//     bruteOptimized(arr, n);
//     return 0;
//}