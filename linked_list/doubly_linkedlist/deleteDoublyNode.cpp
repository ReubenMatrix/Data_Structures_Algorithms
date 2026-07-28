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

    if(head != nullptr){
        newNode -> next = head;
        head -> prev = newNode;
    }
    head = newNode;
}


void deleteNode(Node*& head, int key){
    Node* curr = head;

    while(curr != nullptr){
        if(curr -> data == key){
            Node* deleteNode = curr;

            if(curr -> prev == nullptr){
                head = curr -> next;
            }else{
                curr -> prev -> next = curr -> next;
            }


            if(curr -> next != nullptr){
                curr -> next -> prev = curr -> prev;
            }

            curr = curr -> next;
            delete deleteNode;
        }
        else{
            curr = curr -> next;
        }
    }
}


void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr;

    // Creates: 10 <-> 20 <-> 10 <-> 30 <-> 10Ṇ
    insertNode(head, 10);
    insertNode(head, 30);
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 10);

    cout << "Original List: ";
    printList(head);


    deleteNode(head, 10);

    cout << "After Deleting 10: ";
    printList(head);
    cout << endl;

    return 0;
}