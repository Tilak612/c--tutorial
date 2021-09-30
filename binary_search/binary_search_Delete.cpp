/*
Delete in BST:
    case1:(node is a leaf)
    case 2:(node has one child)
    case 3:(node has two children)
*/
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
Node* inordersuceor(Node* root){
    Node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    } 
    return curr;
}
Node* deleteINBst(Node* root, int key){
    if(key< root->data){
        root->left=deleteINBst(root->left,key);
    }
    else if(key> root->data){
        root->right=deleteINBst(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else{
            if(root->right==NULL){
                Node* temp=root->left;
            free(root);
            return temp;  
            }
        }
        Node* temp=inordersuceor(root->right);
        root->data=temp->data;
        root->right=deleteINBst(root->right,temp->data=key);
    }
    return root;
    

}
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
    cout<<endl;
    root=deleteINBst(root,1);
    inorder(root);
    cout<<endl;
}
