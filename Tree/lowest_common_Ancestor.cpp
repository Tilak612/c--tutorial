/*
Lowest common Ancestor for two nodes:

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
bool getpath(Node* root, int key,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getpath(root->left,key,path) ||getpath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node* root,int n1,int n2){
    vector<int> path1,path2;
    if(!getpath(root,n1,path1)|| !getpath(root,n2,path2)){
        return -1;
    }
    int pc; ///path charge
    for(pc=0;pc<path1.size()&& path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
Node* LCA2(Node* root,int n2, int n1){
    if(root==NULL){
        return NULL;
    }
    if(root->data ==n1 ||root->data ==n2){
        return root;
    }
    Node* leftLca=LCA2(root->left,n2,n1);
    Node* rightLca=LCA2(root->right,n2,n1);
    if(leftLca && rightLca){
        return root;
    }
    if(leftLca!=NULL){
            return leftLca;
    }
    return rightLca;
}
int main()
{
//create root node
    struct Node* root= new Node(1);
    //created sub-node
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);
        
    int n1=7;
    int n2=6;
    Node* lca1=LCA2(root,n1,n2);
    if(lca1==NULL){
        cout<<"LCA Doestn't exist";
    }
    else{
        cout<<lca1->data<<endl;
    }

    int lca=LCA(root,n1,n2);
    if(lca==-1){
        cout<<"LCA Doestn't exist";
    }
    else{
        cout<<lca<<endl;
    }
    return 0;

    

}