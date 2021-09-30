/*
Balanced Height in a binary tree:
    For each node, the difference between the heights of the subtree & right subtree<=1
    mode(left_ehight-right_height)<=1

                ()<-1           //root 
               /  \
        1->  ()   ()<-0        //first node contain 1 node and second node contain 0 node
             /
        0->()              //leaf node is o
    Not Balance Height Tree:
                    ()
                   /   \
             2-> ()    ()
                 /
             1-> ()
                  \
            0->   ()
                 
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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
}
bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if((isBalanced(root->left)==false)||(isBalanced(root->right)==false)){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}
int main()
{
    //create root node
    struct Node* root= new Node(1);
    //created sub-node
    root->left=new Node(2);
    root->left->left=new Node(4);
    if(isBalanced(root)){
        cout<<"Balanced tree"<<"\n";
    }
    else{
        cout<<"unBalanced tree"<<"\n";
    }
}