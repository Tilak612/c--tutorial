/*
Find distance between  2 nodes of a binary tree:

*/
/*
Problem:
    find the distance two nodes in a binary tree, The distance between two nodes is 
    the minimum number of edges to be trversed to reach one node from another.
*/
/*
             1
           /   \
         2      3
        /     // \\
       4      5   6
                    distance node 5 and 6 is 2
*/
/*
STARATEGY=>
    1)Find the LCA(lowest common ancestor)
    2)find distance of n1(d1) & n2(d2) from LCA
    3)Retuurn(d1+d2)
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
Node* LCA(Node *root, int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left !=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
    
}
int findDist(Node *root,int k, int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findDist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);

}
int distBtwNodes(Node *root, int n1, int n2){
    Node *lca=LCA(root,n1,n2);
    int d1=findDist(lca,n1,0);
    int d2=findDist(lca,n2,0);
    return d1+d2;
}
int main()
{
   //create root node
    struct Node* root= new Node(1);
    //created sub-node
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    cout<<distBtwNodes(root,2,5);
}