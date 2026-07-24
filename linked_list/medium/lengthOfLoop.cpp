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


int solution(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast -> next != nullptr){
        fast = fast -> next -> next;
        slow = slow -> next;

        if(slow == fast){
            int length = 1;

            Node* temp = slow -> next;

            while(temp != slow){
                length ++;
                temp = temp -> next;
            }
            return length;
        }
    }
    return 0;
}


int main() {
    Node* head = nullptr;

    insertNode(head, 50);
    insertNode(head, 40);
    insertNode(head, 30);
    insertNode(head, 20);
    insertNode(head, 10);


    head->next->next->next->next->next = head->next->next;

    cout << solution(head) << endl;

    return 0;
}