#include<bits/stdc++.h>
using namespace std;

void printLinkedList(list<int> & head){
    for(auto val : head){
        cout<< val << " ";
    }
    cout<<endl;
}

int main(){
    list<int> linkedList;
    int val;

    while(cin>>val && val != -1){
        linkedList.push_back(val);
    }
    linkedList.sort();
    linkedList.unique();
    printLinkedList(linkedList);
};