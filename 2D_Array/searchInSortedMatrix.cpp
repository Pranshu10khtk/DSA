#include<iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i =0, j = m-1;

    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout<<"found at cell = ("<<i<<", "<<j<<")"<<endl;
            return true;
        }
        else if(mat[i][j] > key){
            // left
            j--;
        }
        else{
            //down
            i++;
        }
    }
    cout<<"key not found!"<<endl;
    return false;
}
int main(){
    int mat[4][4] = {39, 27, 12, 90, 89, 12};

    search(mat, 4, 4, 90);
    return 0;
}