/*
Diameter:
    Number of nodes in the longest path between any 2 leaves

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
int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    return max(lheight,rheight)+1;
}
int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    int currDiameter=lheight+rheight+1;

    
    int lDiameter=calcDiameter(root->left);
    int rDiameter=calcDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
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
    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root);
}