#include <iostream>
using namespace std;
#include<queue>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this -> data = data;
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
        return NULL;
    }
    
    cout << "Insert for left " << endl;
    root -> left = binaryTree(root -> left);
    
    cout << "Insert for right " << endl;
    root -> right = binaryTree(root -> right);
    return root;
}

void orderLevel(Node* root){
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
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
    
}

void preorder(Node* root){
    if(root ==  NULL){
        return;
    }
    
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root){
    if(root == NULL) {
        return ;
    }
    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

int main() {
    // Write C++ code here
    Node* root = NULL;
    
    root = binaryTree(root);
    
    cout << "OUTPUT" << endl;
    orderLevel(root);
    
    cout << "inorder traversal " << endl;
    inorder(root);
    
    cout << endl << "preorder traversal " << endl;
    preorder(root);
    
    cout << endl << "postorder traversal " << endl;
    postorder(root);
    
    return 0;
}
