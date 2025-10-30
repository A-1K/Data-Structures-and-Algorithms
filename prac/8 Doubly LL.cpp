#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

struct Node* getNewNode (int x) {
    struct Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertatHead (int x) {
    struct Node* temp = getNewNode(x);

    if (head == NULL) {
        head = temp;
        return;
    }

    head->prev = temp;
    temp->next = head;
    head = temp;

}

void insertatTail (int x) {
    struct Node* temp = getNewNode(x);

    if (head == NULL) {
         head = temp;
        return;
    }

    struct Node* temp2 = head;    
    while (temp2->next != NULL){
        temp2 = temp2->next;
        //temp = temp->next;
    }

    temp2->next = temp;
    temp->prev = temp2;

    

    /*

        temp2 isnt actually a random temp node in the memory. it is pointing to the head at intialization

        temp2 and head are just different labels pointing to the same memory.
        
        then temp2 traverses, points to last node (since only last nodes next pointer would be NULL)

        any changes to temp2, changes list.. just a means to traverse and make changes to the list

        temp is the actual random node, since created by getNewNode. has a next and prev pointing to NULL. 

        writing because i keep forgetting this
        i need sleep
    */

   

}


void Print() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void reversePrint() {
    Node* temp = head;

    if (temp == NULL) {
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next; // go to last node
    }

    cout << "In reverse: \n";

    while (temp != NULL) {

        cout << temp->data << " ";
        temp = temp->prev;

    }
    cout << endl << endl;
}

int main()
{

    head = NULL;

    insertatHead(1);
    Print();
    reversePrint();

    insertatHead(2);
    Print();
    // reversePrint();
    
    // insertatHead(3);
    // Print();
    // reversePrint();

    // insertatHead(4);
    // Print();
    // reversePrint();

    cout << "Insert 3 at tail\n";
    insertatTail(3);
    Print();

    insertatTail(4);
    Print();



    
    return 0;
}