/*
Right view of a binary tree:

*/

/*
             1
           /   \
         2      3
        /      / \
       4      5   6
             /
            7
                                Right view=> 1, 3,6,7
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
void rightview(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* curr=q.front();
            q.pop();
            if(i==n-1){
                cout<<curr->data<<"->";

            }
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            
            if(curr->right!=NULL)
            {
                q.push(curr->right);
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
    rightview(root);
}