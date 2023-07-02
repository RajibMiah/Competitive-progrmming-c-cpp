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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } else {
        tail->next = newNode;
        tail = tail->next;
    }
}


void reverse(Node*& head , Node* curr) {
   
   if(curr->next == NULL){
        head = curr ;
        return;
   }
   reverse(head , curr->next);
   curr->next->next = curr;
   curr->next = NULL;
}


bool isPalindrome(Node* head){
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* temp = head;

    while(temp != NULL){
        insert_tail(newHead , newTail , temp->val);
        temp = temp->next;
    }

    reverse(newHead , newHead);
    temp = head ;
    Node* temp2 = newHead;

   while (temp != NULL) {
    if (temp->val != temp2->val) {
        return false;
    }
    temp = temp->next;
    temp2 = temp2->next;
   }

    return true;
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
    bool isPalindromeResult = isPalindrome(head);
    cout << (isPalindromeResult ? "YES" : "NO") << endl;
}