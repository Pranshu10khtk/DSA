#include<iostream>
using namespace std;

void removeDuplicate(string str, int index, string result){
    // base case
    if(index == str.length()){
        cout<<result;
        return;
    }
    // Check if current character already exists in result

    bool found = false; //character already exists in result
    for(int i = 0; i < result.length(); i++){
        if(str[index] == result[i]){
            found = true;
            break;
        }
    }

    // character not found
    if(!found){
        result += str[index];
    }
    // recursion call
    removeDuplicate(str, index + 1, result);    
}
int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    removeDuplicate(str, 0, "");
    return 0;
}
