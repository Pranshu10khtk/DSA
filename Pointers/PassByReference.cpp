// in the form of poiters...

// #include<iostream>
// using namespace std;
// void changeA(int* ptr){   // pass by valus to pass by referance using pointer
//     *ptr = 20;
// }
// int main(){
//     int a = 10;
//     changeA(&a); 
//     cout<<"inside main fn = "<<a<<endl;
//     return 0;

// }

// in the form of referances(Alies)..

#include<iostream>
using namespace std;

void changeA(int &b){ // here & is the alies not address.
    b = 20;
}
int main(){
    int a = 10;
    changeA(a);
    cout<<"inside the main fn= "<<a<<endl;
    return 0;
}