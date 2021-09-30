/*
Construct Binary Search Tree from Preorder:
    preorder:{7,5,4,6,8,9}
                7
               /   \
              5      8
            /   \      \
           4     6      9
                 
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
Node* constructBst(int preorder[], int* preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
    {
        return NULL;
    }
    Node *root = NULL;

    if (key > min && key < max)
    {
        root = new Node(key);
        *preorderIdx=*preorderIdx+1;
        if (*preorderIdx < n)
        {
            root->left = constructBst(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }

        if (*preorderIdx < n)
        {
            root->right = constructBst(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }
    return root;
}
void printpreorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "->";

    printpreorder(root->left);
    printpreorder(root->right);
};
int main()
{
    //create root node
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderIdx = 0;
    Node *root =constructBst(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
    printpreorder(root);
}
