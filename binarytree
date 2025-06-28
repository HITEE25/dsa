// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<queue>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* binaryTree(Node* root){
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1){
        return NULL;//base case
    }
    
    cout << "Insert at left " << endl;
    root -> left = binaryTree(root -> left);
    cout << "Insert at right " << endl;
    root -> right = binaryTree(root -> right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}


int main() {
    // Write C++ code here
    Node* root = NULL;
    
    root = binaryTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "OUTPUT " << endl;
    levelOrderTraversal(root);

    return 0;
}
