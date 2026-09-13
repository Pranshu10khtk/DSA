
// get i th bit 0f a number

// #include<iostream>
// using namespace std;

// int getITHbit(int nums, int i){
//     int bitMask = 1 << i; // left shift operation
//     if(!(nums & bitMask)){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     // int nums,i;
//     // cout<<"Enter the number: ";
//     // cin>>nums;
//     // cout<<"Enter the bit for checking: ";
//     // cin>>i;
//     // cout<<"the "<<i<<" bit is: "<<getITHbit(nums, i)<<endl;

//     cout<<getITHbit(6, 2);
//     return 0;
// }

//set i th bit of a number

// #include<iostream>
// using namespace std;

// int setBit(int nums, int i){
//     int bitMask = 1<<i;
//     return (nums | bitMask);
// }
// int main(){
//     cout<<setBit(6,3)<<endl;
//     return 0;
// }

// clear i th bit of a number

// #include<iostream>
// using namespace std;

// int clearBit(int nums, int i){
//     int bitMask = ~(1<<i);
//     return nums&bitMask;
// }

// int main(){
//     cout<<clearBit(6,1)<<endl;
//     return 0;
// }

// power of 2

// #include<iostream>
// using namespace std;

// bool powerOfTwo(int nums){
//     if(!(nums & (nums-1))){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     cout<<powerOfTwo(4)<<endl; // 1 --> true
//     cout<<powerOfTwo(13)<<endl; // 0 --> false
//     return 0;
//}

#include<iostream>
using namespace std;

void updateIthValue(int nums, int i, int value){
    // clear the ith bit
    nums = nums & ~(1<<i);
    // update ith bit
    nums = nums | (value << i);
    cout<<nums<<endl;
}
int main(){
    updateIthValue(7, 2, 0);
    return 0;
}