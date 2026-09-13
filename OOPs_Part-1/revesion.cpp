
// // code -1 of oops

// #include<iostream>
// using namespace std;

// class Room{
//     public: // access spacifier
    
//     // Data members or variables
//     double length;
//     double width;
//     double height;

//     // Members function // methods
//     double Calculate_Area(){
//         return length * width;
//     }

//     double calculate_volume() {
//     return length * width * height;
//     }
// };
// int main(){
//     // for deation
//     Room room1;

//     // for access
//     room1.length = 12.98;
//     room1.width = 34.81;
//     room1.height = 78.12;

//     // objectName.memberFunction
//     cout<<"Area of Room = " << room1.Calculate_Area()<<endl;
//     cout<<"Volume of Room = "<<room1.calculate_volume()<<endl;
//     return 0;
// }


// code -2 of oops

// #include<iostream>
// using namespace std;

// class StudentDetails{
//     // access specifiers
//     public:

//     //data members
//     string name;
//     int rollNo;
//     double marks1, marks2, marks3, marks4;

//     //member function

//     // member function to calculate marks
//     double calculateTotal(){
//         return marks1 + marks2 + marks3 + marks4;
//     }

//     // member function to calculater average
//     double calculateAverage(){
//         return calculateTotal() / 4;
//     }

//     // member function to display syudent information
//     void StudentInfo(){
//         cout<<"Student name: "<<name<<endl;
//         cout<<"Student Roll_No.: "<<rollNo<<endl;
//         cout<<"Student's marks1 = "<<marks1<<endl;
//         cout<<"Student's marks2 = "<<marks2<<endl;
//         cout<<"Student's marks3 = "<<marks3<<endl;
//         cout<<"Student's marks4 = "<<marks4<<endl;
//         cout<<"total marks = "<<calculateTotal()<<endl;
//         cout<<"Average = "<<calculateAverage()<<endl;
//     }
// };
// int main(){
//     StudentDetails s1;

//     // assigning value
//     s1.name = "Pranshu_khatik";
//     s1.rollNo = 102;
//     s1.marks1 = 90;
//     s1.marks2 = 96;
//     s1.marks3 = 88;
//     s1.marks4 = 92;

//     s1.StudentInfo();
//     return 0;

// }


