/*
Maximum path sum:
    Maximumm possible sum of a path in the binary tree starting & ending node
Example:
             1      ->suppose max_sum=1
           /   \
        -12     3   ->after traversal node 1 to 3 is max_sum=4
        /      / \
       4      5  -6 ->after traversal node 3 to 5 is max_sum=9
*/
/*
STRATEGY:
    for each node compute:
        1)Node val
        2)Max path through left child+node val
        3)Max path through right child +node val
        4)Max path throught left child +Max path throught right child + node val
Example:
             1      ->suppose max_sum=1
           /   \
        -12     3   ->after traversal node 1 to 3 is max_sum=4
        /      / \
       4      5  -6 ->after traversal node 3 to 5 is max_sum=9

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
int maxpathsumutil(Node* root ,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpathsumutil(root->left,ans);
    int right=maxpathsumutil(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),
                    max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlepathsum=max(root->data,max(root->data+left,root->data+right));
    return singlepathsum;

}
int maxpathsum(Node* root){
    int ans=INT_MIN;
     maxpathsumutil(root,ans);
     return ans;
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
    cout<<maxpathsum(root);
}