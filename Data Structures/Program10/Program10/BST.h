//
//  BST.h
//  Program10
//
//  Created by Jonah Carpenter on 10/20/21.
//


#include <iostream>

class TreeNode
{
public:
    int value;
    TreeNode* leftChild;
    TreeNode* rightChild;
    
    TreeNode(int newValue, TreeNode* left1 = NULL, TreeNode* right1 = NULL)
    {
        value = newValue;
        leftChild = left1;
        rightChild = right1;
    }
};

class BST
{
public:
    BST() { root = NULL; }
    void findNode(int num) { fandrNode(root, num); }
    void insert(int num) { insertNode(root, num); }
    void showPreOrder() { displayPreOrder(root); }
    void showInOrder() { displayInOrder(root); }
    void showPostOrder() { displayPostOrder(root); }
    
private:
    TreeNode* root;
    void insertNode(TreeNode *&, int);
    void fandrNode(TreeNode *&, int);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *);
    void displayPreOrder(TreeNode *);
    void displayPostOrder(TreeNode *);
};
