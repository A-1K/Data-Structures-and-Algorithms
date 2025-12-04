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


BstNode* insert (BstNode* t, int key) {

    BstNode* r = NULL;
     
    while (t != NULL) {
        r = t;

        if (key == t->data) {
            return;
        }

        else if (key < t->data) {
            t = t->left;
        }

        else {
            t = t->right;
        }

    }

    BstNode* p = new BstNode();
    p->data = key;
    p->left = p->right = NULL;

    if (p->data < r->data) {
        r->left = p;
    }
    else 
        r->right = p;

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

    root = insert (root, 15); // necessary root = since no prev root

    root = insert (root, 10); // root =  not necessary unless root changes
    insert (root, 20); 


    if (Search(root, 20) == true) {
        cout << "Found 20!" << endl;
    } 
    else {
        cout << "Not Found" << endl;
    }


    return 0;
}
