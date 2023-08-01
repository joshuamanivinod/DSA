#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d); //I forgot this
    tail->next = temp;
    tail=tail->next;
}

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head; // I forgot this
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    Node* insert = new Node(d);
    if(temp->next==NULL){
        temp->next=insert;
        tail = tail->next;
        return;
    }
    insert->next=temp->next;
    temp->next = insert;
}

int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        if(curr->next==NULL){
            tail = prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(5);
    Node* tail= node1;
    Node* head= node1;

    print(head);
    cout<<head<<" "<<tail<<endl;
    int n = getLength(head);
    cout<<"length: "<<n<<endl;

    insertAtTail(tail,6);
    print(head);
    cout<<head<<" "<<tail<<endl;
    n = getLength(head);
    cout<<"length: "<<n<<endl;

    insertAtTail(tail,7);
    print(head);
    cout<<head<<" "<<tail<<endl;
     n = getLength(head);
    cout<<"length: "<<n<<endl;

    insertAtTail(tail,8);
    print(head);
    cout<<head<<" "<<tail<<endl;
     n = getLength(head);
    cout<<"length: "<<n<<endl;

    insertAtPosition(head,tail,3,100);
    print(head);
    cout<<head<<" "<<tail<<endl;
     n = getLength(head);
    cout<<"length: "<<n<<endl;

    deleteNode(head,tail,3);
    print(head);
    cout<<head<<" "<<tail<<endl;
     n = getLength(head);
    cout<<"length: "<<n<<endl;

    deleteNode(head,tail,4);
    print(head);
    cout<<head<<" "<<tail<<endl;
     n = getLength(head);
    cout<<"length: "<<n<<endl;
}