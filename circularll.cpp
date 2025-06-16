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
        cout << this -> data << " value of node deleted " << endl;
    }
};

void insertNode(Node* &tail,int element,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = tail;
    }
    else{
        Node* temp = new Node(data);
        Node* curr = tail;
        while(curr -> data != element){
            curr  = curr -> next;
        }
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void deleteNode(Node* &tail,int element){
    if(tail == NULL){
        return ;
    }
    else{
        Node* prev = tail;
        Node*  cur = tail -> next;
        while( cur-> data != element && cur != NULL){
            if (cur == tail) {
                cout << "Element " << element << " not found." << endl;
                return;
            }
            prev = cur;
            cur = cur -> next;
        }
        prev -> next = cur -> next;
        if(cur == prev){
        tail = NULL;
        }
        else if(cur == tail){ 
        tail = prev;
        }
        cur -> next = NULL;
        delete cur;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout << "list is empty" << endl;
        return ;
    }
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while( tail != temp );
    cout << endl;
}

int main(){
    Node* tail = NULL;
    
    insertNode(tail,3,5);
    print(tail);

    
    deleteNode(tail,5);
    print(tail);
}