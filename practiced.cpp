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
        cout << this -> data << " value was deleted " << endl;
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
    temp -> next -> prev = temp;
    head = temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }cout << endl;
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
        temp -> next = NULL;
        tail = temp;
    }
}

void insertAt(Node* &tail,Node* &head,int position,int data){
    if(position == 1){
        insertAtHead(tail,head,data);
        return;
    }
    Node * temp = head;
    int cnt = 1;
    while(cnt < position - 1 && temp != NULL){
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head,data);
        return ;
    }
    Node* insert = new Node(data);
    insert -> prev = temp;
    insert -> next = temp -> next;
    temp ->  next -> prev = insert;
    temp -> next = insert;
}

void deleteNode(Node* &tail,Node* &head,int position){
    if(head == NULL) return;
    if(position == 1){
        Node* temp = head;
        head = temp -> next;
        if( head != NULL){
            head -> prev = NULL;
        }
        else{
            tail = NULL;
        }
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* pre = NULL;
        Node* cur = head;
        int cnt = 1;
        while(cnt < position && cur != NULL){
            pre = cur;
            cur = cur -> next;
            cnt++;
        }
        if( cur == NULL) return;
        pre -> next = cur -> next;
        if( cur -> next != NULL){
        cur -> next -> prev = pre;
        }
        else{
            tail = pre;
        }
        cur -> prev = NULL;
        cur -> next = NULL;
        delete cur;
    }
}

bool isCircular(Node* &tail){
    if( tail == NULL ) return true;
        Node* temp = tail -> next;
        if(temp != tail && temp != NULL){
            temp = temp -> next;
        }
        return (tail == temp);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(tail,head,56);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    insertAtHead(tail,head,35);
    print(head);
    insertAtTail(tail,head,90);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    insertAt(tail,head,3,60);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    deleteNode(tail,head,3);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    deleteNode(tail,head,1);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;
    deleteNode(tail,head,2);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;

    if(isCircular(tail)){
        cout << "the linked list is circular " << endl;
    }
    else{
        cout << "the linked list is not circular " << endl;
    }
}
