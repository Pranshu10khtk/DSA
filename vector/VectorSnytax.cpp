#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int>vec = {1, 2, 3};
//     cout<<vec[0]<<endl;
//     return 0;
// }
// int main(){
//     vector<int>vec(5, 0);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     cout<<vec[3]<<endl;
//     cout<<vec[4]<<endl;
//     return 0;
// }

//using for loop...

// int main(){
//     vector<int>vec(5, 0);
//     for(int i: vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }
int main(){
    vector<char>vec = {'a', 'b', 'c'};
    for(char val: vec)
    {
        cout<<val<<endl;
    }
    return 0;
    
}