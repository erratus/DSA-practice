#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Count function
int count(ListNode* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

ListNode* deleteMiddleNode(ListNode* head){
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;
}

// Main function
int main() {
    // Create linked list: 1 -> 2 -> 3 -> nullptr
    ListNode* node3 = new ListNode(3);
    ListNode* node2 = new ListNode(2);
    node2->next = node3;
    ListNode* node1 = new ListNode(1);
    node1->next = node2;

    // Head of the list
    ListNode* head = node1;

    // Call count function
    int totalNodes = count(head);
    cout << "Total number of nodes: " << totalNodes << endl;

    // Free allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
