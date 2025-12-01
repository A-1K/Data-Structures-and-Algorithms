#include<iostream>
using namespace std;

struct BstNode{
  int data;
  BstNode* left;
  BstNode* right;  
};

BstNode* root = NULL; // Creating an empty tree


BstNode* getNewNode (int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


BstNode* insert (BstNode* root, int data) {

    if (root == NULL) { // if empty tree
        root = getNewNode (data);
    }

    else if (data <= root->data) {
        root->left = insert (root->left, data); // doable iteratively
    }

    else {
        root->right = insert (root->right, data);
    }


    return root;
}

bool Search (BstNode* root, int data) {
    if (root == NULL) {
        return false;
    }

    else if (root->data == data) {
        return true;
    }

    else if (data <= root->data) {
        return Search (root->left, data);
    }

    else {
        return Search (root->right, data);
    }

}


int main() {

    root = insert (root, 15); // necessary

    root = insert (root, 10); // not necessary unless root changes
    root = insert (root, 20); 


    if (Search(root, 20) == true) {
        cout << "Found 20!" << endl;
    } 
    else {
        cout << "Not Found" << endl;
    }


    return 0;
}
