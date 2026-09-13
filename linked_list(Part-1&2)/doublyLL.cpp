#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class doublyLL{

    public:
    Node* head;
    Node* tail;


};

int main() {
    doublyLL ll;
    return 0;
}