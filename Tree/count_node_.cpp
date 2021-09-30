/*
Count all the nodes in a Binary Tree
    left subtree cout + Right sutree count +1
*/

/*
             1
           /   \
         2      3
        / \    / \
       4   5  6   7
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
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return (countNodes(root->left)+countNodes(root->right)+1);
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
    cout<<countNodes(root)<<endl;
    cout<<endl;

}
