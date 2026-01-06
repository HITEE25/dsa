#include<iostream>
using namespace std;

class Stack{
    public:
    int top = -1;
    int size;
    int *arr;

    //contructor to intilize array
    Stack(int size){
        this -> size = size;
        arr = new int[size];
    }
    
    void push(int num){
        if(top < size){
            top++;
            arr[top] = num;
        }
        else{
            cout << "overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            return -1;
        }
    }

    void isEmpty(){
        if(top == -1){
            cout << "Empty" << endl;
        }
        else{
            cout << "Not empty" << endl;
        }
    }

    void print(){
        for(int i=0;i<=top;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(6);
    st.push(7);
    //st.pop();
    st.push(8);
    st.push(9);
    st.push(9);
    st.print();
}
