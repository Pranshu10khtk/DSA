#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;

    List() {
        head = NULL;
    }

    // Insert node at the end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Print linked list
    void print() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Zig-Zag Linked List
    void zigZag() {

        //Find the middle
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow is now at the middle
        // Example:
        // 1 -> 2 -> 3 -> 4 -> 5
        //             ^
        //           slow


        //Reverse second half

        Node* prev = NULL;
        Node* curr = slow;

        while (curr != NULL) {

            Node* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        // prev is the head of reversed second half

        //Alternate merging
        Node* first = head;
        Node* second = prev;

        while (second->next != NULL) {

            Node* firstNext = first->next;
            Node* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};

int main() {

    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original Linked List:" << endl;
    ll.print();

    ll.zigZag();

    cout << "\nZig-Zag Linked List:" << endl;
    ll.print();

    return 0;
}