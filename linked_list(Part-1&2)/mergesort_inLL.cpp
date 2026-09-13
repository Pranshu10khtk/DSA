#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    // Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (left && right) {

            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        // Attach remaining nodes
        if (left)
            tail->next = left;

        if (right)
            tail->next = right;

        return dummy.next;
    }


    // Find middle
    ListNode* findMid(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }


    // Merge Sort
    ListNode* sortList(ListNode* head) {

        // Base case
        if (!head || !head->next)
            return head;

        // Find middle
        ListNode* mid = findMid(head);

        // Split list
        ListNode* right = mid->next;
        mid->next = NULL;

        // Sort left
        ListNode* left = sortList(head);

        // Sort right
        right = sortList(right);

        // Merge
        return merge(left, right);
    }
};


// MAIN FUNCTION
int main() {

    // Create linked list
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    cout << "Before sorting: ";

    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;


    // Sort
    Solution obj;
    head = obj.sortList(head);


    cout << "After sorting: ";

    temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}