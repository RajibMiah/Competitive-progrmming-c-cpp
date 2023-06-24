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

void insertToHead(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } 
    newNode->next = head;
    head = newNode;
    
}

void insertToTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void printList(Node* head, Node* tail) {
    cout << head->val <<" "<< tail->val <<endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insertToHead(head, tail, v);
        } else if (x == 1) {
            insertToTail(head, tail, v);
        }

        printList(head, tail);
    }

    return 0;
}
