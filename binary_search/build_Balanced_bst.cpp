/*
//Build Balanced BST from Sorted Array
Sorted array [1,2,3]
Balanced BST
            2
          /  \
        1     3
Strategy:
1)make middle element the root
2) Recursively , do the same for subtrees
        a)Start to mid-1 for left subtree
        b) mid+1 to end for Right subtree
Example:
{10,20,30,40,50} mid=30
            30
           /  \
         10    40
           \     \
           10     50      
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
Node* sortedArraytoBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=sortedArraytoBST(arr,start,mid-1);
    root->right=sortedArraytoBST(arr,mid+1,end);
    return root;
}

void preorder(struct Node* root){
    if(root==NULL)
    {
        return;
    }
        cout<<root->data<<"->";

    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={10,20,30,40,50};
    
    Node* root=sortedArraytoBST(arr,0,4);
    preorder(root);
    cout<<endl;

    return 0;
}