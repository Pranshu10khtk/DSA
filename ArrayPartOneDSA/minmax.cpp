// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int num[] = {34, 45, 78, 98, -54, -4};
//     int size = 6;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0; i<size; i++){
//         smallest = min(num[i], smallest);
//         largest = max(num[i], largest);
//     }
//     cout<<"Smallest Value is = "<<smallest<<endl;
//     cout<<"Largest Value is = "<<largest<<endl;
//     return 0;
// }




// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int num[] = {2, 4, 56, -9,-6, 54};
//     int size=6;
//     int largest = INT_MIN;
//     int smallest = INT_MAX;
//     for(int i = 0; i < size; i++){
//         largest = max(num[i], largest);
//         smallest = min(num[i], smallest);
//     }
//     cout<<"largest number is = "<<largest<<endl;
//     cout<<"smallest number is = "<<smallest<<endl;
//     return 0;
// }


//finding the index value in this array....


#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[]={3, 4, 1, 89, -8, 5};
    int n =  sizeof(arr)/sizeof(arr[0]);

    int maxIndex=0;
    int minIndex=0;

    for(int i = 1; i < n; i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    cout<<"largest number is  "<<arr[maxIndex]<<" at index "<<maxIndex<<endl;
     cout<<"smallest number is  "<<arr[minIndex]<<" at index "<<minIndex<<endl;
    return 0;
}