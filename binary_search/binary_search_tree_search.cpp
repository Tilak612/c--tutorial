/*
Binary Search Tree in search node:
*/
#include"bits/stdc++.h"
using namespace std;
//create Node structure
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    //Node construction to get value of Node
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
Node* insertBST(Node *root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val <root->data){
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);

    }
    return root;

}
Node* search(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        return root;
    }
    if( root->data > val){
        return search(root->left,val);
    }
    return search(root->right,val);

    }



void inorder(struct Node* root){
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
};
int main()
{
//create root node
    struct Node* root= NULL;
    //created sub-node
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root);  
    if(search(root,3)!=NULL){
        cout<<"Node is found";
    }
    else{
        cout<<"Node is not found";

    }
}
