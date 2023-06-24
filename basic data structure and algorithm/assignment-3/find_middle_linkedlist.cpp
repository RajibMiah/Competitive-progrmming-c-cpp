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
  
    int listSize = 0;
    Node* temp = head;
    while (temp != NULL) {
        listSize++;
        temp = temp->next;
    }

    Node* middle = head;
    int middleIndex = (listSize + 1) / 2;

    for (int i = 1; i < middleIndex; i++) {
        middle = middle->next;
    }

    if (listSize % 2 == 0) {
          cout << middle->val << " " << middle->next->val << endl;
    } else {
       cout << middle->val << endl;
    }
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

    sortLinkedList(head);
    printMiddleElements(head);

    return 0;
}
