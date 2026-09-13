// #include<iostream>
// #include<cstring> 
// using namespace std;

// int main(){
//     char sentence[30];
//     cin.getline(sentence, 30,'.');
//     cout<<"your word was: "<<sentence<<"\n";
//     //int length = strlen(sentence);   // calculate length
//     cout << "length = " << strlen(sentence) << endl;
// }


// // convert to upper case....

// #include<iostream>
// #include<cstring>
// #include<cctype>
// using namespace std;

// int main(){
//     char sentence[20];
//     cin.getline(sentence, 20);
//     cout<<"Original: "<<sentence<<endl;
//     for(int i = 0; sentence[i] != '\0'; i++){
//         sentence[i] = toupper(sentence[i]);
//     }
//     cout<<"toupper: "<<sentence<<endl;
//     cout<<"length = "<<strlen(sentence)<<endl;
//     return 0;
// }

// reverse a character array

// #include<iostream>
// #include<cstring>
// using namespace std;
// void reverse(char arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     char arr[] = {'h', 'e', 'l', 'l', 'o'};
//     int n = 5;

//     reverse(arr, n);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// reverse a string function

// #include <iostream>
// #include <cstring>
// using namespace std;

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str;
//     cout<<"enter a string: ";
//     getline(cin, str);
//     int start = 0;
//     int end = str.length() - 1;
//     while(start<end){
//         swap(str[start], str[end]);
//         start++;
//         end--;
//     }
//     cout<<"Reversed string: "<<str<<endl;
//     return 0;
// }



// reverse a string using built in function

// #include<iostream>
// #include<cstring>
// #include<algorithm>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     reverse(str.begin(), str.end());
//     cout<<"Reverse a string: "<<str<<endl;
//     return 0;
//}

//  4. Using Stack (Conceptual Understanding)

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "hello";
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << reversed;
    return 0;
}