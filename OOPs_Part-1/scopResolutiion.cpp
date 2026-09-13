
// // Access Static Members

// #include<iostream>
// using namespace std;

// class Test{
//     public:
//     int x;

//     // constructor
//     Test(int val){
//         x = val;
//     }

//     //member function
//     void display();
// };

// // definemember function outside the class
// void Test :: display(){
//     cout<<"Value of x = " << x << endl;
// }

// int main(){
//     Test t(10);
//     t.display();
//     return 0;
// }




// with the help of Namespace

// #include<iostream>

// namespace A{
//     int x = 100;
// }
// int main(){
//     std::cout<<"value of x = "<<A::x;
//     return 0;
// }




// class vs structure

// #include<iostream>
// using namespace std;

// struct Test{
//     // x is private
//     int x;
// };
// int main(){
//     Test t;
//     t.x = 10;
//     cout<<"Value of x = "<<t.x<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// struct Base {

//     public:
//     int x;
// };
// struct Derived : Base {
//     public:
//     int y;
// }; 
// // Is equivalent to struct Derived : public Base {}
// int main(){
//     Derived d;
//     d.x = 20; // Works fine because inheritance is public
//     cout << d.x;
//     return 0;
// }