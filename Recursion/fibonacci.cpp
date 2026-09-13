// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n == 0 || n == 1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     cout<<fibonacci(4)<<endl;
//     return 0;
// }


// sorted array

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int n, int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i] > arr[i+1]){
//         return false;
//     }
//     return isSorted(arr, n, i+1);
// }
// int main(){
//     int arr[5] = {1, 9, 4, 2, 3};
//     cout<<isSorted(arr, 5, 3)<<endl;
// }


// first occurance

// #include<iostream>
// using namespace std;
// int  firstOccur(int arr[], int n, int target){ // n --> is index value
//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
     
// }
// int main(){
//     int arr[] = {1, 4, 6, 6, 5, 9};
    
//     cout<<firstOccur(arr, 6, 6)<<endl;
//     return 0;
// }


// last occurance

// #include<iostream>
// using namespace std;

// int lastOccur(int arr[], int n, int target){
//     for(int i =  n-1; i >= 0; i--){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1, 4, 6, 6, 5, 9};
    
//     cout<<lastOccur(arr, 6, 6)<<endl;
//     return 0;
// }


// print x to the power n

// #include<iostream>
// using namespace std;

// int power(int x, int n){
//     // base case
//     if(n == 0){
//         return 1;
//     }
//     // recursion call
//     return x * power(x, n-1);
// }
// int main(){
//     int x = 5, n = 2;
//     cout<<power(x, n)<<endl;
//     return 0;
// }

