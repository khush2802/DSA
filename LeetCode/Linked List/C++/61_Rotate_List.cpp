#include <iostream>
using namespace std;

// Definition of ListNode
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

// Function to rotate list
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Step 1: Find length
    ListNode* tail = head;
    int len = 1;

    while (tail->next) {
        tail = tail->next;
        len++;
    }

    // Step 2: Optimize k
    k = k % len;
    if (k == 0) return head;

    // Step 3: Make circular
    tail->next = head;

    // Step 4: Find new tail
    int steps = len - k;
    ListNode* newTail = head;

    for (int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    // Step 5: Break circle
    ListNode* newHead = newTail->next;
    newTail->next = nullptr;

    return newHead;
}

// Function to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) return 0;

    cout << "Enter elements: ";

    int x;
    cin >> x;

    ListNode* head = new ListNode(x);
    ListNode* temp = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        temp->next = new ListNode(x);
        temp = temp->next;
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    // Rotate
    head = rotateRight(head, k);

    cout << "Rotated List: ";
    printList(head);

    return 0;
}