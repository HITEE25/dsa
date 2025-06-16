#include<iostream>
using namespace std;

void  add(int a,int b){
    a++;
    b++;
    cout << a << " " <<b << endl;
}

int main(){
    int a = 1;
    int b = 2;
    add(a,b);
}