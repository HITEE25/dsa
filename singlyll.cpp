#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "Memory is deleted for node with data: " << this->data << endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;//tail = tail -> next 
}

void insertAt(Node* &tail,Node* &head,int data,int position){
    if(position == 1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1 && temp != NULL){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL && temp != NULL){
        insertAtTail(tail,data);
        return ;
    }

    Node* insert = new Node(data);
    insert -> next = temp -> next;
    temp -> next = insert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt < position && curr != NULL){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr != NULL){
        prev -> next = curr -> next;
        delete curr;
        }
    }
}

int main(){
    Node* node1 = new Node(45);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node* head = node1;
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,35);
    print(head);
    Node* tail = node1;
    if(tail -> next == NULL) tail = node1;
    insertAtTail(tail,65);
    insertAt(tail,head,85,3);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "tail " << tail -> data << endl; 
    deleteNode(head,3);
    print(head);
}