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


Node* bruteSolution(Node* head, int n){
    int count = 0;
    Node* temp = head;

    while(temp != nullptr){
        count ++;
        temp = temp -> next;
    }


    if(count == n){
        Node* newHead = head -> next;
        delete head;
        return newHead;
    }

    int steps = count - n - 1;
    temp = head;

    while(steps --){
        temp = temp -> next;
    }

    Node* deleteNOde = temp -> next;
    temp -> next = temp -> next -> next;
    delete deleteNOde;
    return head;
}


Node* optimalSolution(Node* head, int n){
    Node* fast = head;
    Node* slow = head;

    for(int i = 0; i < n; i++){
        fast = fast -> next;
    }


    if(fast == nullptr){
        Node* newHead = head -> next;
        delete head;
        return newHead;
    }


    while(fast -> next != nullptr){
        fast = fast -> next;
        slow = slow -> next;
    }

    Node* deleteNode = slow -> next;
    slow -> next = slow -> next -> next;
    delete deleteNode;
    return head;
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

    insertNode(head, 5);
    insertNode(head, 4);
    insertNode(head, 3);
    insertNode(head, 2);
    insertNode(head, 1);

  
    printList(head);

    int n = 2;

    head = bruteSolution(head, n);

    printList(head);



        Node* head2 = nullptr;

    insertNode(head2, 5);
    insertNode(head2, 4);
    insertNode(head2, 3);
    insertNode(head2, 2);
    insertNode(head2, 1);

    printList(head2);

    head2 = optimalSolution(head2, n);

    printList(head2);

    return 0;
}