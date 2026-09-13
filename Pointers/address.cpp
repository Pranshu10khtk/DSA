// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     cout<<&a<<endl;
//     return 0;
//}

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout<<"This also Address of a = "<<ptr<<endl;
//     cout<<"Address of a = "<<&a<<endl;
//     cout<<"Addreass of ptr = "<<&ptr<<endl;

//     return 0;
// }

// pointer to pointer....

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int* ptr = &a;
//     int** parPtr = &ptr;
//     cout<<&ptr<<endl;
//     cout<<parPtr<<endl;
//     return 0;
// }

// * dereferance operator....

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    int** parPtr = &ptr;
    cout<<"Value at address = "<<*(&a)<<endl;
    cout<<"Value of address = "<<*(ptr)<<endl;
    cout<<"Parent pointer value = "<<*(parPtr)<<endl; //print the memory address of ptr
    cout<<"Parent pointer value = "<<**(parPtr)<<endl; //print the value of A
    return 0;
}