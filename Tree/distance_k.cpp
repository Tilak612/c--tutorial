/*
Print All NOdes At distance K:

Example:
            1       |
          /   \     |
         5     2    |k=3
 |  1-> /     / \   |
 |     6     3   4  |
 |  2-> \  
 |      7
 | 3-> / \ <-3              Node=5
 |    8   9                 k=3
                                Answers={8,9,3,4}
*/
/*
case1 : Node's Subtree
      (5) K=3    
       /     
       6    k=2     
        \  
         7  k=1
        / \               
       8   9   k=0->ans=curr_node // distance convered 
                    add node on ans={8,9}

Case 2: Node's Ancestors

            1       |
   d=1->  /   \     |
         (5)   2    |k=3
              / \   |
             3   4  |
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
//case1
void printSubtreeNodes(Node *root, int k){
      if(root==NULL || k<0){
            return;
      }
      if(k==0){
            cout<<root->data<<" ";
            return;
      }
      printSubtreeNodes(root->left,k-1);
      printSubtreeNodes(root->right,k-1);

}
//case2
int printNodesAtk(Node *root,Node *target, int k){
      if(root==NULL){
            return -1;
      }
      if(root==target){
            printSubtreeNodes(root,k);
            return 0;
      }
      int dl=printNodesAtk(root->left,target,k);
      if(dl!=-1){
            if(dl+1==k){
                  cout<<root->data<<" ";
            }
            else{
                  printSubtreeNodes(root->right,k-dl-2);
            }
            return 1+dl;
      }
      
      int dr=printNodesAtk(root->right,target,k);
      if(dr!=-1){
            if(dr+1==k){
                  cout<<root->data<<" ";
            }
            else{
                  printSubtreeNodes(root->left,k-dr-2);
            }
            return 1+dr;
      }
      return -1;
}
int main()
{
//create root node
    struct Node* root= new Node(1);
    //created sub-node
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    printNodesAtk(root,root->left,2);
}