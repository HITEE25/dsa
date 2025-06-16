#include<iostream>
using namespace std;

int main(){
    int *p;//pointing towards garbage value
    cout << *p << endl;

    int n = 4;
    int *p2 = 0;
    p2 = &n;
    cout << *p2 << endl;

    int num = 5;
    int *p3 = &num;
    int a  = *p3;//just storing value at a
    cout << "Before " << endl;
    cout << num << endl;
    a++;
    cout << "After " << endl;
    cout << num << endl;

    int n1 = 5;
    int *p4 = &n1;
    cout << "Before " << endl;
    cout << n1 << endl;
    (*p4)++;
    cout << "After " << endl;
    cout << n1 << endl;

    int n2 = 5;
    int a2 = n2;
    cout << "Before " << endl;
    cout << n2 << endl;
    a2++;
    cout << "After " << endl;
    cout << n2 << endl;

    int *q = p4;
    cout << q << " - " << p4 << endl;
    cout << *q << " - " << *p4 << endl;

    int i = 3;
    int *p5 = &i;
    cout << "Before " << endl;
    cout << *p5 << endl;
    *p5 = *p5 + 1;
    cout << "After " << endl;
    cout << *p5 << endl;
    cout << "Before " << endl;
    cout << p5 << endl;
    p5 = p5 + 1;
    cout << "After " << endl;
    cout << p5 << endl;
    int *p1 = 0;//pointer pointing towards null segmentation fault
    cout << *p1 << endl;

}