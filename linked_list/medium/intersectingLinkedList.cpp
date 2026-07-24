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


Node* solution(Node* head1, Node* head2){
    if(head1 == nullptr || head2 == nullptr){
        return nullptr;
    }

    Node* p1 = head1;
    Node* p2 = head2;

    while(p1 != p2){
        if(p1 == nullptr){
            p1 = head2;
        }
        else{
            p1 = p1 -> next;
        }

        if(p2 == nullptr){
            p2 = head1;
        }
        else{
            p2 = p2 -> next;
        }
    }
    return p1;
}


int main() {

    Node* common = new Node(7);
    common->next = new Node(8);
    common->next->next = new Node(9);

    // First Linked List: 1 -> 2 -> 3 -> 7 -> 8 -> 9
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = common;

    // Second Linked List: 4 -> 5 -> 7 -> 8 -> 9
    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;

    Node* intersection = solution(head1, head2);

    cout << intersection -> data;

    return 0;
}