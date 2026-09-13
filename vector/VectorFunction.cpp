#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1, 2, 3, 4, 5};
    cout<<"size = "<<vec.size()<<endl; //vector size
    vec.push_back(6); //push_back
    cout<<"size after push_back = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after pop_back = "<<vec.size()<<endl;
    cout<<"front value is  "<<vec.front()<<endl;
    cout<<"at value is  "<<vec.at(4)<<endl;
    for(int i: vec){
        cout<<i<<endl;
    }
    return 0; 
}
