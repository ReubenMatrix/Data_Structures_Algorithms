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


void insertNode(Node*& head, int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}


Node* reverseList(Node* head){
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

void printList(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr -> next;
    }

    cout << endl;
}


int main(){
    Node*  head = nullptr;
    insertNode(head, 10);
    insertNode(head, 30);
    insertNode(head, 60);
    insertNode(head, 80);

    printList(head);

    head = reverseList(head);

    printList(head);

    return 0;
}