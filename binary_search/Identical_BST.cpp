/*
Problem:
    For given rot nodes of 2 binary search trees, rint if the BSTs are Identical or not.
    Idntical BSTs are structuraly identical & have equal values of the nodes in the structure.
Strategy:
    1) If both empty, return True
    2) check both non-empty:
        a)check that the data at nodes is equal 
        b)check if left subtrees are same
        c)check if right subtrees are same
    3)if (a,b,c) are true, return true
        else return false
EXample
        1                           1       ==>check node equal or not =>equal
         \                           \
          3                           3     ==>check node equal or not =>equal
         / \                         / \
        2   5                       2   8   ==> Not identical
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
bool isIdenticl(Node * root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isIdenticl(root1->left,root2->left);
        bool cond3=isIdenticl(root1->right,root2->right);
        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }

}
int main()
{
//create root node
    Node* root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);
    Node* root1=new Node(2);
    root1->left=new Node(1);
    root1->right=new Node(5);
    if(isIdenticl(root,root1)){
        cout<<"BST are Identical"<<endl;
    }
    else{
         cout<<"BST are not Identical"<<endl;
    }
}
