/*
Recover Binary Search Tree
    Problem:
        2 nodes of a BST are swapped .our task is to restore(correct) the BST
    Strategy:
        Inorder of a BST is sorted
                    |
                    \/
        2 elements in a sorted array are swapped.
    
    case 1:
        Swapped elements are NOT adjacent to each other 
            eg: original={1,2,3,4,5,6,7,8}
                after swapping={1,8,3,4,5,6,7,2}
                                  -           -
    Case 2
        swapped elements are adjacent to each other
            eg: original={1,2,3,4,5,6,7,8}
                after swapping ={1,2,4,3,5,6,7,8}
                                     - -
    Strategy:
        Maintain 3 pointers-
            first,last & mid

        Case1:
                {1,8,3,4,5,6,7,2}
                   -           -
                first: previous node where 1st number < previous[8]
                mid  : number where 1st number < previous[3]
                last : 2nd node where number < previous[2]

                    Swap first with last
        case2:
                {1,2,4,3,5,6,7,8}
                     - -
                first: previous node where 1st number < previous[4]
                mid  : number where 1st number < previous[3]
                last : NULL

                    Swap first with mid
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void  swap1(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calacPointers(Node* root, Node** first, Node** mid, Node** last, Node** prev){
    if(root==NULL){
        return;
    }
    calacPointers(root->left,first,mid,last,prev);
    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    calacPointers(root->right,first,mid,last,prev);
}
void inorder(struct Node* root){
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void restoreBST(Node* root){
    Node* first, *mid, *last, *prev;
    first=NULL;
    mid==NULL;
    last=NULL;
    prev=NULL;
    calacPointers(root, &first, &mid, &last, &prev);
    //case 1
    if(first && last)
    {
        swap1(&(first->data),&(last->data));;
    }
    //case 2
    else if(first && mid)
    {
        swap1(&(first->data),&(mid->data));
    }
}

int main(){
    Node* root=new Node(6);
    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);
    inorder(root);
    cout<<endl;
    restoreBST(root);
    inorder(root);
    cout<<endl;
    

    return 0;
}