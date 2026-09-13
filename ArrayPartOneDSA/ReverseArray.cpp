
// two pointer approach....

// #include<iostream>
// using namespace std;
// void reverseArray(int arr[], int size){
//     int start = 0, end = size -1;   // start -> point to first element // end -> point to last element
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = 6;
//     reverseArray(arr, size);
//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// user input array

#include<iostream>
using namespace std;

int revesreArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n;

    //size of array
    cout<<"Enter size of array: ";
    cin>>n;

    // teke array from user
    int arr[n];
    cout<<"enter "<<n<<" element: ";
    for(int i = 0; i < n; i++){
         cin>>arr[i];
    }

    //reverse array
    revesreArray(arr, n);

    //print reverse array
    cout<<"reverse array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 