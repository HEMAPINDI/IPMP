#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
   
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    node* curr = head;
    stack<int> s;
    while(curr!=NULL){
        s.push(curr->data);
        curr = curr->next;
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}