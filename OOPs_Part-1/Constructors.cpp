
// Default Constructor

#include<iostream>
using namespace std;

class cube{

    private:
    int side;

    // constructor
    public:

    cube(){
        
        side = 6;
        cout<<"How many side in 3 * 3 cube?"<<endl;
        cout<<"cube has "<<side<<" side"<<endl;
    }
};
int main(){
    cube cube1; // creat object
    
    return 0;
}


