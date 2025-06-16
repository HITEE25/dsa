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

Node *removeDuplicates(Node *&head)
{
    // Write your code here
    Node *curr = head;
    while (curr != NULL)
    {
        Node *prev = curr; // t means we're initializing a pointer named prev to point to the same node as curr at the start of the inner loop. So prev starts off pointing to the current node being evaluated for duplicates.
        Node *temp = curr->next;
        while (temp != NULL)
        {
            if (curr->data == temp->data)
            {
                Node *nextPointer = temp->next;
                delete temp;
                prev->next = nextPointer;
                temp = temp->next;
            }
            else
            {                // curr -> data != temp -> data
                prev = temp; // Move prev one step forward to point to temp. This is important because prev always needs to point to the node just before temp (in case a duplicate is found later and we need to delete temp).
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

int main()
{
    Node *node1 = new Node(45);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    insertAtHead(head, 67);
    insertAtHead(head, 57);
    insertAtHead(head, 67);
    insertAtHead(head, 45);
    insertAtHead(head, 57);
    print(head);
    Node* duplicate = removeDuplicates(head);
    print(head);
}