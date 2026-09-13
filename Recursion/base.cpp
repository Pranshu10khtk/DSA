// #include<iostream>
// using namespace std;

// // void printNums(int n){
// //     if(n==1){
// //         cout<<"1\n";
// //         return;
// //     }
// //     cout<<n<<" ";
// //     printNums(n-1);
     
// // }
// // int main(){
// //     printNums(34);
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n* factorial(n-1);
// }
// int main(){
//     cout<<"factorial of N is : "<<factorial(5)<<endl;
// }

#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int main(){
    print(5);
    return 0;
}