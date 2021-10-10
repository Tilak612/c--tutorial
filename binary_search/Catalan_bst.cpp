/*
Applications of catalan numbers
    1)Possible BSTs
    2)Paranthesis/bracket combinations
    3)Possible forest 
    4)Ways of triangulations
    5)Possible paths in matrix
    6)Dividing a circle using N chords
    7)Dyck words of given length & much more
*/
/*
1)Possible BSTs
    n=3
    n:nodes in the tree
    1)  1           2)1         3)   2              4)  3       5)    3
         \             \            /  \               /             /
          2             2           1   2             2             1
           \           /                             /               \
            3          3                            1                 2
    5-way build 

    n=1 =>c_1=1
    n=2 =>c_2=2
    n=3 => c_3=(c_0*c_2)+(c_1*c_1)+(c_2*c_0)=5
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
vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftSubtrees=constructTrees(start,i-1);
        vector<Node*> rightSubtrees=constructTrees(i+1,end);
    for(int j=0;j<leftSubtrees.size();j++){
        Node* left=leftSubtrees[j];
        for(int k=0;k<rightSubtrees.size();k++){
            Node* right=rightSubtrees[k];
            Node* node=new Node(i);
            node->left=left;
            node->right=right;
            trees.push_back(node);
        }
    }
    }
    return trees;
}
void preorder(struct Node* root){
    if(root==NULL)
    {
        return;
    }
        cout<<root->data<<"->";

    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<Node*> totalTrees=constructTrees(1,3);
    for(int i=0;i<totalTrees.size();i++){
        cout<<(i+1)<<endl;
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}