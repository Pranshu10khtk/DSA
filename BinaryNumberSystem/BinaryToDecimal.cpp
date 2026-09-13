// #include<iostream>
// using namespace std;
// int binaryToDecimal(int binNum){
//     int ans = 0, pow = 1; //2 power 0;
//     while(binNum>0){
//         int rem = binNum%10;
//         ans += (rem*pow);
//         binNum /= 10;
//         pow *= 2;
         
//     }
//     return ans; /// finsl decimal form
// }
// int main(){
//     int binNum;
//     cout<<"Enter the binary number: ";
//     cin>>binNum;
//     cout<<"Decimal Number is= "<<binaryToDecimal(binNum )<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long)<<endl;
}