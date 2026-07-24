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

void insertHead(Node*& head, int val){
    Node* newPtr = new Node(val);
    newPtr -> next = head;
    head = newPtr;
}

void printList(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp -> data <<  " ";
        temp = temp -> next;
    }
}


int main(){
    Node* head = nullptr;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 50);
    
    printList(head);
    return 0;
}