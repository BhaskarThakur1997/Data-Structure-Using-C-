/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*/

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int minDepth(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL){
        return minDepth(root->right) + 1;
    }
    if(root->right == NULL){
        return minDepth(root->left) + 1;
    }
    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

/*              3
               / \
              9  20
                 / \
                15  7
*/

int32_t main(){
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    cout<<minDepth(root)<<" ";
}