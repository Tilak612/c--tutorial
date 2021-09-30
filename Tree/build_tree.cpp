/*
Build tree from preorder & inorder

Algorithm:
    1)pick element from preorde & create a node.
    2) Increament preorder idx
    3)Search for picked element's pos in inorder
    4)call to build left subtree from inorder 0 to pos-1
    5)call to build right subtree from inorder pos=1 to n
    6)return the node


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
int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(curr==inorder[i]){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[], int inorder[],int start, int end)
{
    static int idx=0;
    if(start>end){
        return NULL; //base condition
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder, start, end, curr);//search element in inorder element position 
    node->left=buildTree(preorder, inorder, start, pos-1);
    node->right =buildTree(preorder, inorder, pos+1, end);
}

void inorder1(Node* root){
    if(root==NULL)
    {
        return;
    }
    inorder1(root->left);
    cout<<root->data<<"->";
    inorder1(root->right);
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(preorder, inorder,0, 4);
    inorder1(root);
    cout<<endl;
    return 0;
}