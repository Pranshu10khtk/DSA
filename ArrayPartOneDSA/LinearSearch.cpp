#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){  //fond the value
            return i;
        }
    }
    return -1; //not found the value
}
int main(){
    int arr[] = {19, 23, 43, 45, 90, 12};
    int size = 5;
    int target = 90;
    int result = linearSearch(arr, size, target);
    if(result != -1){
        cout<<"Target Value Foumd at index = "<<result<<endl;
    }
    else{
        cout<<"Target Not Foundv = "<<endl;
    }
    return 0;
}