#include<iostream>
using namespace std;

void update1(int **p1){
p1 = p1 + 1;
}

void update2(int **p1){
*p1 = *p1 + 1;
}

void update3(int **p1){
**p1 = **p1 + 1;
}

int main(){
    int n = 12;
    int *p = &n;
    int **p1 = &p;

    cout << "before " << endl;
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
    cout << "After " << endl;
    update1(p1);
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
    cout << endl;
    cout << "Before " << endl;
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
    update2(p1);
    cout << "After " << endl;
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
    cout << endl;
    cout << "Before " << endl;
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
    update3(p1);
    cout << "After " << endl;
    cout << n  << endl;
    cout << p <<  endl;
    cout << p1 << endl;
}