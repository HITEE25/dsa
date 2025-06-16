#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
    ~Node(){
        cout << this -> data << " Value was deleted in the node" << endl;
    }
};

void insertAtHead(Node* &tail,Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

void insertAt(Node* &tail,Node* &head,int data,int position){
    if(position == 1){
        insertAtHead(tail,head,data);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1&& temp != NULL){
        temp =temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,head,data);
        return ;
    }
    Node* insert = new Node(data);
    insert -> next = temp -> next;
    temp -> next -> prev = insert;
    temp -> next = insert;
    insert -> prev = temp;
}

void deleteNode(Node* &tail,Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* cur = head;
        int cnt = 1;
        while(cnt < position && cur != NULL){
            prev = cur;
            cur = cur -> next;
            cnt++;
        }
        if(cur != NULL){
            cur -> prev = NULL;
            prev -> next = cur -> next;
            if( cur == tail){
                tail = prev;
            }
            cur -> next = NULL;
            delete cur;
        }
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

int main(){
    //temp -> next -> prev = insert
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(tail,head,70);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    cout << "length of linkedlist is " << getLength(head) << endl;
    insertAtTail(tail,head,30);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    insertAt(tail,head,20,2);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    deleteNode(tail,head,2);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    deleteNode(tail,head,2);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
}