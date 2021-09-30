/*
Flatten a Binary tree:
    Problem:
        Given a binary tree. flatten it into linked list in-place. After flattening, 
        left of each node should point to NULL and right should contain next node in 
        preorder sequence.
        (It's NOT allowed to use other data structures)
    Binary tree:                flat Binary tree
            1                       1
           / \                       \
          2   3         ===>          2
             /                         \
             4                          3
                                         \
                                          4
*/
/*
Strategy:
    1)Recursively, flatten the left & right subtrees.
    2)Store the left tail & right tail //tail mean last element
    3)Store right subtree in 'temp' & make left subtree as right subtree.
    4)join right subtree with left tail
    5)Return right tail
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
void flatten(Node* root){
    if(root==NULL|| root->left==NULL && root->right==NULL)
    {
        return;

    }
    if(root->left!=NULL)
    {
        flatten(root->left);
        Node* temp =root->right;
        root->right=root->left;
        root->left=NULL;
        Node* t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}
void inorder(struct Node* root){
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
int main()
{
//create root node
    struct Node* root= new Node(1);
    //created sub-node
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    inorder(root);
    cout<<endl;
    flatten(root);
    inorder(root);
    cout<<endl;
}