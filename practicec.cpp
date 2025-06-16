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

    ~Node(){
        cout << this -> data << " value was deleted from node" << endl;
    }
};

void insertNode(Node* &tail,int element,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = tail;
    }
    else{
        Node* cur = tail;
        while(cur -> data != element && cur != NULL){
            if(cur == tail) cout << "element was not found " << endl;
            cur = cur -> next;
        }
        Node* temp = new Node(data);
        temp -> next = cur -> next;
        cur -> next = temp;
    }
    cout << "Elment was not found" << endl;
}

void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout << "List is empty " << endl;
        return ;
    }
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(temp != tail);
    cout << endl;
}

void deleteNode(Node* &tail,int element){
    if(tail == NULL){
        return ;
    }
    else{
        Node* prev = tail;
        Node* cur = prev -> next;
        while(cur->data != element && cur != NULL){
            if(cur == tail) cout << "Elment was not found";
            prev = cur;
            cur = cur -> next;
        }
        prev -> next = cur -> next;
        if(prev == cur) tail = NULL;
        if(cur == tail) tail = prev;
        cur -> next = NULL;
        delete cur;
    }
    cout << "Element was not found " << endl;
}

bool isCircular(Node* &tail){
    if(tail == NULL) return true;
    Node* temp = tail -> next;
    while( temp != NULL && temp != tail){
        temp = temp -> next;
    }
    return (tail=temp);
}

int main(){
    Node* tail = NULL;
    insertNode(tail,3,6);
    print(tail);

    deleteNode(tail,6);
    print(tail);

    if(isCircular(tail)){
        cout << "the linked list is circular " << endl;
    }
    else{
        cout << "the linked list is not circular " << endl;
    }
}