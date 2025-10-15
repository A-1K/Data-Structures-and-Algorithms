#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void Push (int x) {
    struct Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp; // update top pointer to new node, new node is now top of stack
}

void Pop() {
    struct Node* temp;
    if (top == NULL) return; // stack empty
    
    temp = top;
    top = top->link;
    delete temp;

}


int main() {
    

    return 0;
}
