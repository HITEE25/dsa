#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << this -> data << " value is deleted from node " << endl;
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
    tail = temp;//tail = tail -> next;
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
    if( temp -> next == NULL && temp != NULL){
        insertAtTail(tail,data);
        return ;
    }
    Node* insertat = new Node(data);
    insertat -> next = temp -> next;
    temp -> next = insertat;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL || temp == head){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
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
            prev -> next = cur -> next;
            if(cur == tail){
                tail = prev;
            }
            cur -> next = NULL;
            delete cur;
        }
    }
}

bool detectLoop(Node* &tail){
    //for empty node
    if(tail == NULL) return false;
    Node* temp = tail;
    map<Node*,bool> visited;
    while( temp != NULL){
        if( visited[temp] == true ) return true;
        visited[temp] = true;
    }
    return false;
}


int main(){
    Node* node1 = new Node(45);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    print(head);
    insertAtHead(head,67);
    print(head);
    insertAtHead(head,57);
    print(head);
    Node* tail = node1;
    if(tail->next == NULL) tail = node1;
    insertAtTail(tail,34);
    print(head);
    insertAt(tail,head,84,3);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    deleteNode(head,tail,3);
    print(head);
    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,3);
    print(head);
    if(tail->next == NULL) tail = node1;
    cout << "Head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    tail -> next = head -> next;
    print(head);
    if(detectLoop(tail)){
        cout << "The cycle is found" << endl;
    }
    else{
        cout << "The cycle is not found" << endl;
    }
}