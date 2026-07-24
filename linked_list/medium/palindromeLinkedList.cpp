#include<iostream>
#include<vector>
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

bool bruteSolution(Node* head){
    vector<int> ans;
    Node* temp = head;

    while(temp != nullptr){
        ans.push_back(temp -> data);
        temp = temp -> next;
    }

    int left = 0;
    int right = ans.size() - 1;

    while(left < right){
        if(ans[left]!=ans[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}


int main() {
    Node* head = nullptr;

   
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 2);
    insertNode(head, 0);

    cout << bruteSolution(head);

    return 0;
}