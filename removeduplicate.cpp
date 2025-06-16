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

Node *sort(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    // Node not empty
    // Node* temp = head;
    bool swapped;
    do
    {
        swapped = false;
        Node *prev = head;
        Node *curr = prev->next;
        while (curr != NULL)
        {
            if (prev->data > curr->data)
            {
                int temp = prev->data;
                prev->data = curr->data;
                curr->data = temp;
                swapped = true;
            }
            prev = curr;
            curr = curr->next;
        }
    } while (swapped);
    return head;
}

Node *removeDuplicates(Node *head)
{
    // Write your code here
    sort(head);
    if (head == NULL)
        return NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL && temp->data == temp->next->data)
        {
            Node *pointerNext = temp->next->next;
            delete (temp->next);
            temp->next = pointerNext;
        }
        else
        {
            temp = temp->next;
        }
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
    insertAtHead(head, 33);
    print(head);
    Node *duplicate = removeDuplicates(head);
    print(head);
}