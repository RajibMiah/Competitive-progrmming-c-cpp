#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this->val =val;
        this->next = NULL;
    }
};

void removeDuplicates(Node* head) {
    if (head == NULL) {
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        Node* runner = temp;
        while (runner->next != NULL) {
            if (runner->next->val == temp->val) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        temp = temp->next;
    }
}

void sortLinkedList(Node* &head) {
    if (head == NULL || head->next == NULL)
        return;

    Node* i = NULL;
    Node* j = NULL;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void insert_val(Node*& head , int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }
     Node* temp = head;
     while(temp->next!= NULL){
        temp = temp->next;
     }
     temp->next = newNode;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_val(head , val);
        
    }
    removeDuplicates(head);
    sortLinkedList(head);
    printLinkedList(head);
};