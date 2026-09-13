// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    
//     int*ptr = NULL;
    
//     cout<<ptr<<endl;
//     return 0;
// }


// predict question...

#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* p = &a;
    int** q = &p;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    return 0;
}