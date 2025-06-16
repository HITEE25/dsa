#include<iostream>
using namespace std;

void update(int n){
    n++;
}

int main(){
    int n=9;
    cout << "before " << n << endl;
    update(n);
    cout << "After " << n << endl;
}