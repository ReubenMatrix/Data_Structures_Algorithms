#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};


void insertNode(Node*& head, int val){
    Node* newNode = new Node(val);
    if (head != nullptr) {
        newNode -> next = head;
        head -> prev = newNode;
    }
    head = newNode;
}


void printFront(Node* head){
    if(head == nullptr){
        return;
    }


    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


void printBack(Node* head){
    Node* temp = head;

    while(temp -> next != nullptr){
        temp = temp -> next;
    }

    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> prev;
    }
}


int main() {

    Node* head = nullptr;

    insertNode(head, 40);
    insertNode(head, 30);
    insertNode(head, 20);
    insertNode(head, 10);

    printFront(head);

    printBack(head);

    return 0;
}