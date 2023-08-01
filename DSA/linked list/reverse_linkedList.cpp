#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){  // 1.constructor
        this->data=data;
        this->next=NULL;
    }
};

void reverse(Node* &head,Node* &tail) 
{
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    tail = head;
    head =  prev;
    // Write your code here
}

void print(Node* &head){  // 5.How to traverse a linkedList
    Node* temp = head; //6. head ki copy banaye taki head change naa ho
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d){ // 3.taki original linkedList mai changes aa jaye
    Node* temp = new Node(d);
    tail->next=temp; // 4. tail change kar diya
    tail = temp;
}

void insertAtHead(Node* &head,int d){ // 3.taki original linkedList mai changes aa jaye
    Node* temp = new Node(d); 
    temp->next=head; //4. temp ko head mai point karke head ko change kiya
    head=temp;
}

int main(){
    Node* node1 = new Node(1);  // 2.dynamic object
    Node* tail = node1;
    Node* head = node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    print(head);
    cout<<"head: "<<head<<endl;
    cout<<"tail: "<<tail<<endl;
    reverse(head,tail);
    print(head);
    cout<<"head: "<<head<<endl;
    cout<<"tail: "<<tail<<endl;
}