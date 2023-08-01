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

void print(Node* &head){  // 5.How to traverse a linkedList
    Node* temp = head; //6. head ki copy banaye taki head change naa ho
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(1);  // 2.dynamic object
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,2);
    print(head);
    insertAtTail(tail,3);
    print(head);
}