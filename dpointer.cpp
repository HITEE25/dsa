#include<iostream>
using namespace std;

int main(){
    int n = 9;
    int *p = &n;
    int **p1 = &p;

    cout << "Printing value of n " <<**p1 <<  endl;
    cout << "Printing value of n " << *p << endl;
    cout << n << endl;
    cout << endl;

    cout << p << endl;//value at pointer p
    cout << *p1 << endl;
    cout << &n << endl;
    cout << endl;

    cout << p1 << endl;//address of pointer p
    cout << &p << endl;
    cout << endl;
}