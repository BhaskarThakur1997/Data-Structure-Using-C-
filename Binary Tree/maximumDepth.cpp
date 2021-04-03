/*
Maximum Depth of a Binary Tree
*/

#include "Bits/stdc++.h"
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

int calculateDepth(Node* root){
    if(root == NULL){
        return 0;
    }
    int left_Height = calculateDepth(root->left);
    int right_Height = calculateDepth(root->right);

    return max(left_Height, right_Height) + 1;
}

int32_t main(){
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    cout<<calculateDepth(root);
}
