// #include<iostream>
// using namespace std;
// int decToBinary(int decNum){
//     int ans = 0, pow = 1;
//     while(decNum > 0){
//         int rem = decNum %2;  // for remender
//         decNum/=2;  // quotient
//         ans += (rem * pow);
//         pow*=10;
//     }
//     return ans;     //binary form
// }
// int main(){
//     int decNum = 50;
//     cout<<decToBinary(decNum)<<endl;
//     return 0;
// }

//my code..

// #include<iostream>
// using namespace std;
// int decToBinary(int decNum){
//     int ans = 0, pow = 1;
//     while(decNum>0){
//         int rem = decNum%2;
//         decNum /= 2;
//         ans += (rem*pow);
//         pow *= 10;
//     }
//     return ans;
// }
// int main(){
//     int decNum;
//     cout <<"Enter the Decimal Number: ";
//     cin>>decNum;
//     cout<<"Binary number is= "<<decToBinary(decNum)<<endl;
//     return 0;
// }

//print 1 to 10 binary number.

#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int decNum;
   for(int i = 1; i <= 10; i++){
     cout<<decToBinary(i)<<endl;
   }
    return 0;
}

