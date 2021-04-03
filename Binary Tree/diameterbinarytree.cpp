/*
Given the root of a binary tree, return the length of the diameter of the tree.
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
int calculateHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int calculateDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int left_Height = calculateHeight(root->left);
    int right_Height = calculateHeight(root->right);
    int current_Diameter = left_Height + right_Height + 1;

    int left_Diameter = calculateDiameter(root->left);
    int right_Diameter = calculateDiameter(root->right);

    return max(current_Diameter, max(left_Diameter, right_Diameter));
}

int32_t main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 

    cout<<calculateDiameter(root);
}