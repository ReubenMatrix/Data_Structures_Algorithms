#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};


void insert(Node*& head, int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}


void deleteNode(Node*& head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
}


void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insert(head, 30);
    insert(head, 20);
    insert(head, 10);

  
    printList(head);

    deleteNode(head);

 
    printList(head);

    return 0;
}