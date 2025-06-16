#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
  *p = *p + 1;  
}

void updateAdd(int *p){
    p  = p + 1;
    cout << "inside fun block " << p << endl;
}

int main(){
    int n  = 25;
    int *p = &n;
    print(p);
    cout << "Before update" << endl;
    cout << *p <<  endl;
    update(p);
    cout << "After update" << endl;
    cout << *p << endl;
    cout << "Before add update" << endl;
    cout << p << endl;
    updateAdd(p);
    cout << "After add update" << endl;
    cout << p << endl;
}