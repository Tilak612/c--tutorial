/*
Zig-zag traversal Binary Search Tree:
             1          ->right
            /  \
           2    3       ->left
            \    \
            4     5     ->right
           / \                                                 Zigzag Traversal
          6   7         ->left =>right to left                   1,3,2,4,5,7,6
Strategy:
1)Use 2 stacks- currentLevel & nextLevel
2)variable LeftToRight
3)if LeftToRight, push left child then right
    else push right child then left
Example:
             1          ->right
            /  \
           2    3       ->left
            \    \
            4     5     ->right
           / \                                             
          6   7   
    (1)   currlevel=>1    nextLevel=>2,3    LeftToRight=true
    (2)   LeftToRight=false currlevel=>3,2    nextLevel=>4,5    Answers=>1,
    (3)   LeftToRight=true currlevel=>4,5    nextLevel=>6,7    Answers=>1,3,2
    (3)   LeftToRight=true currlevel=>7,6    nextLevel=>null    Answers=>1,3,2,4,5
    Answers=>1,3,2,4,5,7,6
    
*/

#include "bits/stdc++.h"
using namespace std;
//create Node structure
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    //Node construction to get value of Node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void zigzagtraversal(Node* root){
    stack<Node*>  currlevel;
    stack<Node*>  nextlevel;
    bool leftToRight=true;
    currlevel.push(root);
    while(!currlevel.empty()){
        if(root==NULL){
            return;
        }
        Node*temp=currlevel.top();
        currlevel.pop();
        if(temp){
            cout<<temp->data<<"  ";
            if(leftToRight){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            leftToRight=!leftToRight;
            swap(currlevel,nextlevel);
        }

        
    }
    
}
int main()
{
//create root node
    Node* root=new Node(12);
    root->left=new Node(9);
    root->right=new Node(15);
    root->left->left=new Node(5);
    root->left->right=new Node(10); 
    zigzagtraversal(root);
}
