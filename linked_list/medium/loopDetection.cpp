#include<iostream>
#include<unordered_set>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};


void insertNode(Node*& head, int data){
    Node* newNode = new Node(data);

    newNode -> next = head;
    head = newNode;
}


bool bruteSolution(Node* head){
    unordered_set<Node*> visited;
    Node* temp = head;

    while(temp != nullptr){
        if(visited.find(temp) != visited.end()){
            return true;
        }

        visited.insert(temp);
        temp = temp -> next;
    }

    return false;
}



bool optimalSolution(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast != nullptr && fast -> next != nullptr){
        fast = fast -> next -> next;
        slow = slow -> next;

        if(fast == slow){
            return true;
        }
    }

    return false;
}


int main() {
    Node* head = nullptr;

    insertNode(head, 50);
    insertNode(head, 40);
    insertNode(head, 30);
    insertNode(head, 20);
    insertNode(head, 10);

    head->next->next->next->next->next = head->next->next;

    cout << bruteSolution(head);
    cout<< endl;
    cout << optimalSolution(head);
    return 0;
}