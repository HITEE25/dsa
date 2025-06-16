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

Node* reverse(Node* &head){
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;

	while( curr != NULL ){
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

void insertAtTail(Node* &head,Node* &tail,int data){
	Node* temp = new Node(data);
	if(tail == NULL){
		tail = temp;
		head = temp;
		return;
	}
	else{
		tail -> next = temp;
		tail = temp;
	}
}

Node* add(Node* &first,Node* &second){
	int carry = 0; 
	Node* head = NULL;
	Node* tail = NULL;

	while( first != NULL || second != NULL || carry != 0){
		//if(first == 0) break;
		int val1 = 0;
		if(first != NULL) val1 = first -> data;
		int val2 = 0;
		if(second != NULL) val2 = second -> data;
		int sum = carry + val1 + val2;
		int digit = sum % 10;
		insertAtTail(head,tail,digit);
		carry = sum/10;
		if(first != NULL) first = first -> next;
		if(second != NULL) second = second -> next;
	}

	return head;
}

Node* removeZero(Node* &head){
	while( head != NULL && head -> data == 0 && head ->next != NULL ){
		Node* temp = head;
		head = head -> next;
		delete(temp);
	}
	return head;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *addLL(Node *head1, Node *head2)
{
    // Write your code here
	Node* first = reverse(head1);
	Node* second = reverse(head2);

	Node* ans = add(first,second);

	ans = reverse(ans);
	ans = removeZero(ans);

	return ans;
}

int main(){
    Node* first = new Node(2);
    Node* head1 = first;
    Node* tail1 = first;
    Node* second = new Node(3);
    Node* head2 = second;
    Node* tail2 = second;
    insertAtTail(head1,tail1,7);
    insertAtTail(head1,tail1,2);
    insertAtTail(head1,tail1,4);
    insertAtTail(head2,tail2,6);
    insertAtTail(head2,tail2,3);
    Node* ans = addLL(first,second);
    print(ans);
}