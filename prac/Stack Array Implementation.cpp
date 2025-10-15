#include<iostream>
using namespace std;

#define MAX_SIZE 101
int top = -1; // empty stack
int A[MAX_SIZE];

void Push (int x) { 
    if (top == MAX_SIZE - 1) { // overflow
        cout << "Stack Overflow\n"; // wow they made an error after the website !
        return;
    }
    
    top++;
    A[top] = x;
}

void Pop () {
    if (top == -1) {// already empty
        cout << "No element to pop\n";
        return;
    }
    top--;
}

int Top() {
    return A[top];
}


int main() {
    

    return 0;
}
