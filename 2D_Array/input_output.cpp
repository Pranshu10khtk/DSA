// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{100, 100, 100}, {87, 74, 89}, {63, 72, 65}};
//     cout<< "row and column(1,1) = "<< arr[1][1] << endl;
//     return 0;
// }

// ++++++++++++++++++++++++++++++++++++++++++++++//++++++++++++++++++++++++++++++

// input output in 2D array....

#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int n = 3, m = 4; //  n -> Row, m -> column
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
