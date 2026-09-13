// #include<iostream>
// using namespace std;

// int binnarySearch(int arr[], int n, int target){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         int mid = (start+end)/2;
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(arr[mid]>target){
//             start = mid+1;
            
//         }
//         else{
//             end = mid-1;
            
//         }

        
//     }
//      return -1;
    
// }
// int main(){
//     int n;
//     cout<<"enter number of  element: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter sorted element: ";

//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"enter key value: ";
//     cin>>target;

//     int result = binnarySearch(arr, n, target);

//     if(result != -1){
//         cout<<"element found at index "<<result<<endl;
//     }
//     else{
//         cout<<"element not found!"<<endl;
//     }
//     return 0;
    
// }

