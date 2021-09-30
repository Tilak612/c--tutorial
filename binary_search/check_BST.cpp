/*
Check to BST:
    Approach 1:
    Max of left subtree(maxl) node>maxl
    Max of right subtree(minr) node<minr
    Appoach 2:
    min allowed<node
    max allowed>node
Strategy:
                    Node(min,max)
                    /           \
            left(min,node)      right(node,max)
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
bool checkBST(Node* root,Node* max=NULL, Node* min=NULL){
    if(root==NULL){
        return NULL;
    }
    if(min!=NULL && root->data<= min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }
    bool leftVaild= checkBST(root->left,min,root);
    bool rightVaild= checkBST(root->right,root,max);
    return leftVaild and rightVaild;
}
int main()
{
//create root node
    struct Node* root= new Node(5);
    //created sub-node
    root->left=new Node(2);
    root->right=new Node(8);

    if(checkBST(root,NULL,NULL)){
        cout<<"vaild root"<<endl;
    }
    else{
         cout<<"INvaild root"<<endl;
       
    }
}