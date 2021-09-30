/*
Binary Search Tree:
    It is normal binary tree which apply following rule:
        1)The left subtree of a node contains only node with key lesser than the nod's key
        2)The right subtree of a node contains only nodes with key greater than the
             node's key
        3)The left and right subtree each must also be a binary search tree. 
            Three must be no duplicate nodes.
Example BST:
             3
           /   \
         2      7
        /      / \
       1      5   8
             /  \
            4    6
*/
/*
Build a BST:
    {5,1,3,4,2,7}
                5
               / \
              1   7
               \ 
                3
               /  \
               2   4
                
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
}
