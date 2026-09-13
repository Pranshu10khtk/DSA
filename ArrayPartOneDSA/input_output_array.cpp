#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/ sizeof (int);
    for(int idx = 0; idx <= length - 1; idx++){
        cout<<arr[idx]<<" ";
    }
    cout<<endl;
    return 0;
}