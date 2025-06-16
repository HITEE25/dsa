#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "number is " << a << endl;
    cout << "Address of number " << &a << endl;

    int *ptr = &a;
    cout << "Value at *ptr " << *ptr << endl;//value of a
    cout << "value at ptr " << ptr << endl;// address of a

    double n = 4.5;
    double *p = &n;
    cout << "value at *p " << *p << endl;
    cout << "value at p " << p << endl;

    cout << "Size of intger is " << sizeof(a) << endl;
    cout << "Size of pointer ptr " << sizeof(ptr) << endl;
    cout << "Size of pointer p " << sizeof(p) << endl;
}