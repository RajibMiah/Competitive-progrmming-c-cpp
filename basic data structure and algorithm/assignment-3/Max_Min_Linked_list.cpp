#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
const int INF = 1e9;
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
    };
};

void insert_val(Node* &head , Node* &tail ,  int val){
    Node* newValue  = new Node(val);
    if(head == NULL){
        head = newValue;
        tail = newValue;
    }else{
        tail->next = newValue;
        tail = newValue;
    }
};

// void print_list(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

void find_min_max(Node* head ,int &min_val , int &max_val){
    min_val = head->val;
    max_val = head->val;
    
    Node* temp = head;
    while(temp != NULL){
        if(temp->val < min_val){
            min_val = temp->val;
        }
        if(temp->val > max_val){
            max_val = temp->val;
        }
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
   
    while(true){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insert_val(head , tail , val);
    }
    int min_val, max_val;
    find_min_max(head, min_val, max_val);
    // print_list(head);
    cout << max_val << " " << min_val;
}