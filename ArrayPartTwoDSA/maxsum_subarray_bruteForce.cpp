
// type -1, i prefar


// #include<iostream>
// using namespace std;

// int maxsubarray_bruteForce(int *arr, int n){
    
//     for(int i = 0; i < n-1; i++){
//         for(int j = i; j < n-1; j++){
//             int sum = 0;
//             for(int k = i; k <= j; k++){
//                 sum += arr[k];
//             }
//             cout<<sum<<", ";
//         }
//         cout<<endl;
         
//     }
     
    
// }
// int main(){
//     int arr[7] = {1, 2, 3, -5, 6, -7, 8};
//     int n = sizeof(arr)/sizeof(int);

//     maxsubarray_bruteForce(arr, n);
//     return 0;
// }


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// type - 2 i will always prefar...............

#include<iostream>
#include<climits>
using namespace std;

void maxSubarraySum_bruteForce(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end<n; end++){
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum += arr[i];
            }
            cout<<sum<<", ";
            maxSum = max(maxSum, sum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum = "<<maxSum<<endl;
}

int main(){
    int arr[7] = {2, -3, 9, -8, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum_bruteForce(arr, n);

    return 0;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// type-3
// not prefar but for knowladge

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     for(int stat=0; stat < size; stat++){ //define start (start = 0 to size)
//         for(int end = stat; end <= size; end++){  //define end(end = size to size)
//             for(int i = stat; i < end; i++){ //(i = start to end)
//                 cout<<arr[i];
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }