#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }

        ~Node() {
            //cout<<"data deleted!" << data<<endl; 
            if(next != NULL) {
                delete next;
                next = NULL;
            }
        }
};

class List { // list will be collection of nodes
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail  = NULL;
    }

    ~List() {
        if(head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val); // dynamic
        //Node* newNode(val); // static
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val); // dynamic
        //Node* newNode(val); // static
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" -> ";
            temp = temp-> next;
        }
        cout<<"NULL"<<endl;
    }

    void insertList(int val, int pos) {
        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i = 0; i < pos -1 ; i++) {
            temp = temp -> next;     
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;   
    }

    void pop_front(){
        if(head == NULL) {
            cout << "link list is empty!";
            return;
        }
        Node * temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    int searchItr(int key) {
        Node* temp = head;
        int idx = 0;

         while(temp != NULL) {
            if(temp -> data == key) {
                return idx;
            }

            temp = temp -> next;
            idx++;
        }
        return -1;
    }

    void pop_back(){
        Node * temp = head;
        while(temp -> next -> next = NULL) {
            temp = temp -> next;
        } 
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }

    int helper(Node* temp, int key) {

        //base case
        if(temp == NULL) {
            return -1;
        }

        if(temp -> data == key) {
            return 0;
        }

        int idx = helper(temp -> next, key);
        if(idx == -1){
            return -1;
        }

        return idx + 1;
    }
    int searchRec(int key) {
        return helper(head, key);
    }

    void reverseList() {
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL) {
            Node* next = curr -> next;
            curr -> next = prev;
            //update for next iteration
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    int getsize() {
        int sz = 0;
        Node* temp = head;
        
        while(temp != NULL) {
            temp = temp -> next;
            sz++;
        }
        return sz;
    }

    void removeNth(int n) {
        int size = getsize();
        Node* prev = head;
        for(int i = 1; i < (size-n); i++) {
            prev = prev -> next;
        }

        Node* toDel = prev -> next;
        cout<<"going to delete:" <<toDel<<endl;
        prev -> next = prev -> next -> next;
    }
};

int main() {
    List ll;
    
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insertList(4, 2);
     
    ll.insertList(4, 2);
    ll.pop_front();
    ll.pop_back();
     
    cout << ll.searchItr(6) << endl;
    cout << ll.searchRec(2) << endl;
    ll.reverseList();
    ll.removeNth(1);
    ll.printList();


    return 0;
}

