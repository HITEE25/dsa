#include<iostream>
using namespace std;

int a = 25;

void first(int& i){
    cout << "a in first " << a << endl;
    cout << i << endl;
}

void second(int& i){
    cout << "a in second " << a << endl;
    cout << i << endl;
}

int main(){
    cout << "a in main " << a << endl;
    int i = 5;
    first(i);
    second(i);
    return 0;
}