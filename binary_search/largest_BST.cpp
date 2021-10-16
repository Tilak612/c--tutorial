/*
Largest BST in a binary tree:
    Problem:
        Return the size of the largest BST in a binary tree
    Strategy:
        For each node store the following info:
            1)min in subtree
            2)max in subtree
            3)subtree size
            4)size of largest BST
            5)isBST
            Recurively, traverse in a bottom - up
            manner & find out the size of largest
    Example:
        5
      /  \
    3     6
  /  \
 2   4

 node 2=>
 {
     min=2
     max=2
     size=1
     ans=1
     isBST=True
 }
 Node 4=>
 {
     min=4
     max=4
     size=1
     ans=1
     isBST=True
 }
Node 3=>
 {
     min=2
     max=4
     size=3
     ans=3
     isBST=True
 }
Node 6=>
 {
     min=6
     max=6
     size=1
     ans=1
     isBST=True
 }
 Node 5=>
 {
     min=2
     max=6
     size=5
     ans=5
     isBST=True
 }
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data =val;
        left=NULL;
        right=NULL;
    }
};
struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};
Info largestBSTinBT(Node * root){
    if(root==NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if(root->left==NULL && root->right==NULL){
         return {1,root->data,root->data,0,true};
    }
    Info leftinfo=largestBSTinBT(root->left);
    Info rightinfo=largestBSTinBT(root->right);
    Info curr;
    curr.size=(1+leftinfo.size+rightinfo.size);
    if(leftinfo.isBST && rightinfo.isBST && leftinfo.max <root->data && rightinfo.min >root->data){
        curr.min=min(leftinfo.min,min(rightinfo.min,root->data));
        curr.max=max(leftinfo.max,max(rightinfo.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftinfo.ans,rightinfo.ans);
    curr.isBST=false;
    return curr;
}

int main(){
    Node* root =new Node(15);
    root->left =new Node(20);
    root->right =new Node(30);
    root->left->left =new Node(15);
    cout<<largestBSTinBT(root).ans;
    return 0;
}


















