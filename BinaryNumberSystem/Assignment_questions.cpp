 
//Question 1 : Convert the following binary numbers into decimal forms : 
// ● 111111 
// ● 10110 
// ● 10011 
// ● 110010

// #include<iostream>
// using namespace std;

// int binnaryToDecimal(int BinNum){
//     int ans = 0, pow = 1;
//     while(BinNum>0){
//         int rem = BinNum % 10;
//         BinNum /= 10;
//         ans += (rem*pow);
//         pow*=2; 
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     cout<<"Binnay To Decimal = "<<binnaryToDecimal(n)<<endl;
//     return 0;
// }


// Question 2 : Convert the following decimal numbers into binary forms : 
// ● 25 
// ● 49 
// ● 31 
// ● 88


// #include<iostream>
// using namespace std;

// int decimaTOBin(int decNum){
//     int ans = 0, pow = 1;
//     while (decNum>0){
//         int rem = decNum % 2; //remender
//         decNum /= 2;
//         ans += (rem* pow);
//         pow *= 10;
//     }
//     return ans;
// }
// int main(){
//      int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     int decNum;
//     for(int i = 1; i <= 10; i++){
//         cout<<decimaTOBin(i)<<endl;
//     }
//     cout<<"Binnay To Decimal = "<<decimaTOBin(n)<<endl;
//     return 0;
// }



 
// Question 3 : Following are the rules of adding 2 binary digits : 
// 0 + 0 = 0, carry = 0 
// 1 + 0 = 1, carry = 0 
// 0 + 1 = 1, carry = 0 
// 1 + 1 = 0, carry = 1


#include <iostream>
using namespace std;

// Function to add two binary digits
int binaryAdd(int a, int b, int &carry) {
    if (a == 0 && b == 0) {
        carry = 0;
        return 0;
    }
    else if (a == 1 && b == 0) {
        carry = 0;
        return 1;
    }
    else if (a == 0 && b == 1) {
        carry = 0;
        return 1;
    }
    else { // a == 1 && b == 1
        carry = 1;
        return 0;
    }
}

int main() {
    int a, b, carry;

    cout << "Enter two binary digits (0 or 1): ";
    cin >> a >> b;

    int sum = binaryAdd(a, b, carry);

    cout << "Sum = " << sum << endl;
    cout << "Carry = " << carry << endl;

    return 0;
}