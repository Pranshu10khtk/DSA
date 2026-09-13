
// // // Question 1 : Print the number of all 7’s that are in the 2d array. 
// // // Example : 
// // // Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3 
// // // Output - 2

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int mat[2][3] = {{4, 7, 8}, {8, 8, 7}};

// //     int n = 2;
// //     int m = 3;

// //     int target = 7;
// //     int count = 0;

// //     // traverse matrix
// //     for(int i = 0; i<n; i++){ // for row
// //         for(int j = 0; j<m; j++){ //for column
// //             if(mat[i][j] == target){
// //                 count++;
// //             }
// //         }
// //     }

// //     cout<<"Occures "<<target<<"="<<count<<endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int mat[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };

// //     int n = 3;
// //     int m = 3;
// //     int sum = 0;

// //     // traverse matrix
// //     for(int i = 0; i<n; i++){ // for row
// //          sum += mat[1][i];
// //     }
    
// //    cout<<"sum of second row = "<<sum<<endl;
// //     return 0;
// // }


// // In-place convert matrix in specific order


//  // C++ Program for convert matrix in specific order
// // using in-place matrix transpose
// #include <bits/stdc++.h>
// #define HASH_SIZE 128
// using namespace std;

// // Non-square matrix transpose of matrix of size r x c
// // and base address A
// void transformMatrix(int* A, int r, int c)
// {
//     // Invert even rows
//     for (int i = 1; i < r; i = i + 2)
//         for (int j1 = 0, j2 = c - 1; j1 < j2; j1++, j2--)
//             swap(*(A + i * c + j1), *(A + i * c + j2));

//     // Rest of the code is from below post
//     // https://www.geeksforgeeks.org/dsa/inplace-m-x-n-size-matrix-transpose/
//     int size = r * c - 1;
//     int t; // holds element to be replaced, eventually
//            // becomes next element to move
//     int next; // location of 't' to be moved
//     int cycleBegin; // holds start of cycle

//     bitset<HASH_SIZE> b; // hash to mark moved elements

//     b.reset();
//     b[0] = b[size] = 1;
//     int i = 1; // Note that A[0] and A[size-1] won't move
//     while (i < size) {
//         cycleBegin = i;
//         t = A[i];
//         do {
//             // Input matrix [r x c]
//             // Output matrix 1
//             // i_new = (i*r)%(N-1)
//             next = (i * r) % size;
//             swap(A[next], t);
//             b[i] = 1;
//             i = next;

//         } while (i != cycleBegin);

//         // Get Next Move (what about querying
//         // random location?)
//         for (i = 1; i < size && b[i]; i++)
//             ;
//     }
// }

// // A utility function to print a 2D array of size
// // nr x nc and base address A
// void Print2DArray(int* A, int nr, int nc)
// {
//     for (int r = 0; r < nr; r++) {
//         for (int c = 0; c < nc; c++) {
//             cout << setw(4) << *(A + r * nc + c);
//         }

//         cout << endl;
//     }

//     cout << endl;
// }

// // Driver program to test above function
// int main()
// {
//     int A[][4] = { { 1, 2, 3, 4 },
//                    { 5, 6, 7, 8 },
//                    { 9, 10, 11, 12 } };

//     int r = 3, c = 4;

//     cout << "Given Matrix:" << endl;
//     Print2DArray((int*)A, r, c);

//     transformMatrix((int*)A, r, c);

//     cout << "Transformed Matrix:" << endl;
//     Print2DArray((int*)A, c, r);

//     return 0;
// }



// transpos matrix

#include<iostream>
using namespace std;

int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int transpose[3][2];

    // transpos logic
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            transpose[j][i] = arr[i][j];
        }
    }

    // Print transpose
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}