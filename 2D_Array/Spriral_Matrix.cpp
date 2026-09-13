#include<iostream>
using namespace std;

void SpiralMAtrix(int mat[][4], int n, int m){

    int srow = 0, scol = 0;       // srow = starting Row,,, scol = starting Column
    int erow = n-1, ecol = m-1;   // erow = ending Row,,, ecol = ending column

    while(srow <= erow && scol <= ecol){

        // Top loop 

        for(int j = scol; j <= ecol; j++){
            cout<<mat[srow][j]<<" ";
        }

        // Right loop

        for(int i = srow+1; i <= erow; i++){
            cout<<mat[i][ecol]<<" ";
        }

        // Bottom loop

        for(int j = ecol-1; j >= scol; j--){
            cout<<mat[erow][j]<<" ";
        }

        // Left loop

        for(int i = erow-1; i >= srow+1; i--){
            cout<<mat[i][scol]<<" ";
        }

        srow++; scol++;
        erow--; ecol--;
        
    }
    cout<<endl;
}
int main(){
    int mat[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};

    SpiralMAtrix(mat, 4, 4);
    return 0;
}



// Odd condition...(there are no duplicate element)

// #include<iostream>
// using namespace std;

// void SpiralMAtrix(int mat[][4], int n, int m){

//     int srow = 0, scol = 0;       // srow = starting Row,,, scol = starting Column
//     int erow = n-1, ecol = m-1;   // erow = ending Row,,, ecol = ending column

//     while(srow <= erow && scol <= ecol){

//         // Top loop 

//         for(int j = scol; j <= ecol; j++){
//             cout<<mat[srow][j]<<" ";
//         }

//         // Right loop

//         for(int i = srow+1; i <= erow; i++){
//             cout<<mat[i][ecol]<<" ";
//         }

//         // Bottom loop

//         for(int j = ecol-1; j >= scol; j--){
//             if(srow == erow){
//                 break;
//             }
//             cout<<mat[erow][j]<<" ";
//         }

//         // Left loop

//         for(int i = erow-1; i >= srow+1; i--){
//             if(scol == ecol){
//                 break;
//             }
//             cout<<mat[i][scol]<<" ";
//         }

//         srow++; scol++;
//         erow--; ecol--;
        
//     }
//     cout<<endl;
// }
// int main(){
//     int mat[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};

//     SpiralMAtrix(mat, 3, 4);
//     return 0;
// }
