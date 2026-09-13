#include<iostream>
using namespace std;

int main(){
    int arr[] = {23, 43, 76, 99, 87};
    int n = sizeof(arr)/sizeof(int);
    
    int max = arr[0];
    for(int i = 0; i <= n; i++){
        if(arr[i]>max){
            max = arr[i];
            cout<<"assigning value = "<<arr[i]<<endl;
        }
    }
    cout<<"max = "<<max<<endl;
    return 0;
}