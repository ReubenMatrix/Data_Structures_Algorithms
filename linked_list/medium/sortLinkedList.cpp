#include<iostream>
#include<vector>
#include<algorithm>
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

Node* bruteSolution(Node* head){
    vector<int> arr;
    Node* temp = head;

    while(temp != nullptr){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }

    sort(arr.begin(), arr.end());

    temp = head;
    int i = 0;
    while(temp != nullptr){
        temp -> data = arr[i++];
        temp = temp -> next;
    }

    return head;
}


void printList(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}



Node* findMiddleNode(Node* head){
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}



Node* merge(Node* left, Node* right){
    Node dummy(-1);
    Node* tail = &dummy;

    while(left != nullptr && right != nullptr){
        if(left -> data <= right -> data){
            tail -> next = left;
            left = left -> next;
        } else {
            tail -> next = right;
            right = right -> next;
        }
        tail = tail -> next;

    }

    if (left != nullptr)
        tail->next = left;

    if (right != nullptr)
        tail->next = right;

    return dummy.next;
}

Node* optimalSolution(Node* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }

    Node* middle = findMiddleNode(head);
    Node* right = middle -> next;
    middle -> next = nullptr;

    Node* left = head;
    left = optimalSolution(left);
    right = optimalSolution(right);

    return merge(left, right);
}

int main(){
    Node* head = nullptr;

    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 5);
    insertNode(head, 2);
    insertNode(head, 4);

    printList(head);

    head = bruteSolution(head);

    printList(head);


    Node* head2 = nullptr;

    insertNode(head2, 3);
    insertNode(head2, 1);
    insertNode(head2, 5);
    insertNode(head2, 2);
    insertNode(head2, 4);

    printList(head2);

    head2 = optimalSolution(head2);

    printList(head2);

    return 0;
}