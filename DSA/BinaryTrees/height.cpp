#include <bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }
};

int height(Node* node){
    // code here 
    if(node == NULL){
        return 0;
    }
    int left = height(node->left);
    int right = height(node->right);
    int ans = max(left,right) + 1;
    return ans;
}

Node *buildTree(Node* root){  //                     * - MOST IMPORTANT
    cout<<"Data: ";
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"left: ";
    root->left = buildTree(root->left);
    cout<<"right: ";
    root->right = buildTree(root->right);
    return root;
}

void inOrder(Node* root){
    // base case
    if(root == NULL){
        return;
    } 
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    Node* root=NULL;
    root = buildTree(root);
    int h = height(root);
    cout<<h;
}