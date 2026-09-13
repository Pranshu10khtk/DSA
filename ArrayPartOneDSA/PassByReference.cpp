
// Array passed by reference, (reference) also known as non-primitive data type


#include<iostream>
using namespace std;

// void chngeArray(int arr[], int size){
//     cout<<"function!\n";
//     for(int i = 0; i < size; i++){
//         arr[i] = 2*arr[i];
//     } 
// }
// int main(){
//     int arr[] = {1, 2, 3};
//     chngeArray(arr, 3);
//     cout<<"in main\n";
//     for(int i = 0; i<3; i++){
//         cout<<arr[i] <<" ";
//     }
//     cout<<endl;
//     return 0;
// }

 
void changeArray(int arr[], int size){
    cout<<"in function\n";
    for(int i = 0; i < size; i++){
        arr[i] = 3*arr[i];
    }
}
int main(){
    int arr[] = {4, 5, 6};
    changeArray(arr, 3);
    cout<<"in main!\n";
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

