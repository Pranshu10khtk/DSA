// #include<iostream>
// using namespace std;

// void subArray(int *arr, int n){
//     for(int start = 0; start < n; start++){
//         for (int end = start; end < n; end++){
//             cout<<"("<<start<<","<<end<<") ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;

//     subArray(arr, n);
//     return 0;
// }

#include<iostream>
using namespace std;

void printsubArray(int *arr, int n){
    for(int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            for(int k = end; k <= end; k++){
                cout<<arr[k];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printsubArray(arr, n);
    return 0;
}