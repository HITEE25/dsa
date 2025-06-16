#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sort(Node* &head){
    if(head == NULL) return ;

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0) zeroCount++;
        else if(temp -> data == 1) oneCount++;
        else if(temp -> data == 2) twoCount++;
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
}


int main()
{
    Node *node1 = new Node(0);
    Node *head = node1;
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtHead(head,0);
    insertAtHead(head,2);
    insertAtHead(head,0);
    print(head);
    cout << "After sorting" << endl;
    sort(head);
    print(head);
}