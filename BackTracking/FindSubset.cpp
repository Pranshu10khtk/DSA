#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubstring(string str, string subset){
    // base case
    if(str.size() == 0){
        cout<<subset<<endl;
        return;
    }

    char ch = str[0];
    //yes choice
    printSubstring(str.substr(1, str.size()-1), subset+ch);
    //no choice
    printSubstring(str.substr(1, str.size()-1), subset);
}
int main(){
    string str = "abc";
    string subset = "";
    printSubstring(str, subset);
    return 0;
}