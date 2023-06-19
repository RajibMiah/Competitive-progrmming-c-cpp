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

bool isSame(Node* list1, Node* list2) {
    if (list1 == NULL && list2 == NULL) {
        return true;
    }

    if (list1 == NULL || list2 == NULL || list1->val != list2->val) {
        return false;
    }

    return isSame(list1->next, list2->next);
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (cin >> val) {
        if (val == -1) {
            break;
        }
        insert_val(head1, tail1, val);
    }

    while (cin >> val) {
        if (val == -1) {
            break;
        }
        insert_val(head2, tail2, val);
    }

    if (isSame(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
