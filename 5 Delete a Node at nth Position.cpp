#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data) {

    // allocate and fill new node
    Node* temp1 = new Node;
    temp1->data = data;
    temp1->next = NULL;   // because it will be last

    if (head == NULL) {
        // if list is empty, new node becomes head
        head = temp1;
    } else {
        // otherwise traverse to the end and append
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = temp1;
    }
}
void Print() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void Delete (int n) {
    
    struct Node* temp1 = head;

    if (n == 1) {
        head = temp1->next;
        delete temp1;
        return;
    }
    
    for (int i = 0; i<n-2; i++) {
        temp1 = temp1->next;
    }

    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    
    delete temp2;


}


int main()
{
    head = NULL; // list is empty initally
    Insert(2); // 
    Insert(4); // 
    Insert(6); //
    Insert(5); // 

    Print();
    int n; 
    cout << "Enter position:";
    cin >> n;
    
    Delete(n);
    Print();

    return 0;
}