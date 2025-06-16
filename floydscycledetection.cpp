#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

bool floydsCycle(Node* &head){ 
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL) fast = fast -> next;
        slow = slow -> next;
        if(slow == fast ) return true;
    }
    return false;
}

Node* nodeMet(Node* &head){ 
    if(head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL) fast = fast -> next;
        slow = slow -> next;
        if(slow == fast ) return slow;
    }
    return NULL;
}

Node* startMeet(Node* &head){
    //empty list
    if(head == NULL) return NULL;

    Node* last = nodeMet(head);
    Node* start = head;
    while(start != last){
        start = start -> next;
        last = last -> next;
    }
    return start;
}

void removeLoop(Node* &head){
    if(head == NULL) return;
    Node* start = startMeet(head);
    Node* temp = start;
    while(temp -> next != start){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int n){
    if(head == NULL){
        Node* temp = new Node(n);
        head = temp;
    }
    else{
    Node* temp = new Node(n);
    temp -> next = head;
    head = temp;
    }
}

int main(){
    Node* node1 = new Node(67);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,57);
    insertAtHead(head,34);
    insertAtHead(head,40);
    insertAtHead(head,12);
    insertAtHead(head,28);
    print(head);
    tail -> next = head -> next -> next;
    if(floydsCycle(head)){
        cout << "Cycle is found " << endl;
    }
    else{
        cout << "Cycle is not found " << endl;
    }

    if(nodeMet(head) != NULL ){
    cout << "Node is part of loop " << nodeMet(head) -> data << endl;
    }

    Node* start = startMeet(head);
    cout << "starting node " << start -> data << endl;
    removeLoop(head);
    print(head);
}