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

void buildFrontLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter the root data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        cout << "Enter left data for : " << root -> data << endl;
        int leftData;
        cin >> leftData;
        
        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }
        
        cout << "Enter right data for : " << root -> data << endl;
        int rightData;
        cin >> rightData;
        
        if(rightData != -1){
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }
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

int main() {
    // Write C++ code here
    Node* root = NULL;
    
    buildFrontLevelOrder(root);
    
    cout << "OUTPUT" << endl;
    orderLevel(root);
    
    
    return 0;
}
