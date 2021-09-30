/*
Level Order Traversal:
             1
           /   \
         2      3
        / \    / \
       4   5  6   7

Queue:
    Root ->null //In Queue  null value show level end
    {1,null}->[null,2,3]->//null value end show level end first level
    //after start level insert null value at end
    {2,3,null}->
            {3,null,4,5}->    //remove 2 add left and right and in queue (4,5)
                    {null,4,5,6,7}    //remove 2 add left and right and in queue (6,7)
            //null show end level and start new thrid level
            {4,5,6,7,null}->{5,6,7,null}->{6,7,null}->{7,null}->{null}
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
void printlevelorder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<"->";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else{
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    
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
    printlevelorder(root);
}