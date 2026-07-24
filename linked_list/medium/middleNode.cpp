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


Node* bruteSolution(Node*& head){
    if(head == nullptr){
        return nullptr;
    }

    int count = 0;

    Node* temp = head;
    count = 0;

    while(temp != nullptr){
        count++;
        temp = temp -> next;
    }

    int middle = (count / 2);

    temp = head;

    while(middle --){
        temp = temp -> next;
    }

    return temp;

}


Node* optimalSolution(Node*& head){
    if(head == nullptr){
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}



int main(){
    Node* head = nullptr;
    insertNode(head,10);
    insertNode(head,20);
    insertNode(head,30);
    insertNode(head,40);

    cout << bruteSolution(head) -> data << endl;
    cout << optimalSolution(head) -> data << endl;
    return 0;

}


