#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
const int INF = 1e9;
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_val(Node* &head, Node* &tail, int val) {
    Node* newValue = new Node(val);
    if (head == NULL) {
        head = newValue;
        tail = newValue;
    } else {
        tail->next = newValue;
        tail = newValue;
    }
}

void sortLinkedList(Node* &head) {
    if (head == NULL || head->next == NULL)
        return;

    Node* i;
    Node* j = NULL;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void printMiddleElements(Node* head) {
    if (head == NULL) {
        cout << "Empty list!" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prevSlow = NULL;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prevSlow = slow;
        slow = slow->next;
    }

    if (fast == NULL) {
        // Even number of nodes, print both middle elements
        cout << "Middle elements: " << prevSlow->val << " and " << slow->val << endl;
    } else {
        // Odd number of nodes, print the single middle element
        cout << "Middle element: " << slow->val << endl;
    }
}




void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val) {
        if (val == -1) {
            break;
        }
        insert_val(head, tail, val);
    }

    cout << "Input List: ";
    printList(head);

    sortLinkedList(head);

    cout << "Reversed List: ";
    printList(head);

    cout << "Middle Element(s): ";
    printMiddleElements(head);

    return 0;
}
