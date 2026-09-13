#include<iostream>
using namespace std;


// time complexity -> (n^2)

// int diagonalSum(int mat[][3], int n){
//     int sum = 0;
//     for(int i = 0; i < n; i++){  //row
//         for(int j = 0; j < n; j++){  // column
//             if(i == j){
//                 sum += mat[i][j];
//             } else if(j == n-i-1){
//                 sum += mat[i][j];
//             } 
//         }  
            
//     }
//     cout<<"sum = "<<sum<<endl;
//     return sum;
// }
// int main(){
//     int mat[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
//     int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     diagonalSum(mat2, 3);
//     return 0;
// }


// time complexity -> O(n)

#include<iostream>
using namespace std;

int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for(int i =0; i < n; i++){
        sum += mat[i][i]; // i = j.....j = n-i-1
        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    cout<<"sum = "<<sum<<endl;
    return sum;
}
int main(){
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    diagonalSum(mat, 4);
    return 0;
}