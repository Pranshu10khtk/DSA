
// floyd's cycle finding algorithm....

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

        //~Node() {
            //cout<<"data deleted!" << data<<endl; 
            // if(next != NULL) {
            //     delete next;
            //     next = NULL;
            // }
        //}
};

class List { // list will be collection of nodes
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail  = NULL;
    }

    // ~List() {
    //     if(head != NULL) {
    //         delete head;
    //         head = NULL;
    //     }
    // }


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

    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" -> ";
            temp = temp-> next;
        }
        cout<<"NULL"<<endl;
    }


    // Create a cycle
    void createCycle() {
        if (tail != NULL) {
            tail->next = head;
        }
    }

    // Getter for head
    Node* getHead() {
        return head;
    }

    bool isCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next; //+1
            fast = fast -> next -> next; // +2

            if(slow == fast) {
                cout << "Cycel exists\n";
                return true;
            }
        }
        cout<<"cycle does not exists\n";
        return false;
    }

    void removeCycle(){
        //detect cycle
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next; //+1
            fast = fast -> next -> next; // +2

            if(slow == fast) {
                cout << "Cycel exists\n";  
                isCycle = true;
                break;       
            }
        }  

        if(!isCycle) {
            cout<<"cycle does not exists\n";
            return;
        }

        slow = head;
        if(slow == fast) { // special case : tail -> head

            while(fast -> next != slow) {
                fast = fast -> next;
            }
            fast -> next = NULL;
        }
        else {
            Node* prev = fast;

            while(slow != fast) {
                slow = slow -> next;
                prev = fast;
                fast = fast -> next;
            }
            prev -> next = NULL;// remove cycle
        }
    } 
};

int main() {
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); // 1-> 2-> 3-> 4->5->1
    
   
    ll.createCycle();
    ll.isCycle(ll.getHead());
    ll.removeCycle();
    ll.printList();

    return 0;
}



