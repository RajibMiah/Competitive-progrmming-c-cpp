#include<bits/stdc++.h>
using namespace std;

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

void printReverseList(Node* head) {
    if (head == NULL) {
        return;
    }
    printReverseList(head->next);
    cout << head->val << " ";
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


    printReverseList(head);
    cout<<endl;
    printList(head);

    return 0;
}
