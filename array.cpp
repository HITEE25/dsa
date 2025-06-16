#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,9}; 
    int *p1 = &arr[10];
    cout << "Before " << p1 << endl;    
    p1 = p1 + 1; 
    cout << "After " << p1 << endl; 

    cout << "address of First element " << arr << endl;
    cout << "address " << &arr[0] << endl;
    cout << arr[0] << endl;//element 

    cout << "Element " << *arr << endl;
    cout << "0idx " << *arr+1 << endl;
    cout << "1idx " << *(arr + 1) << endl;
    cout << "0idx " << *(arr) + 1 << endl;
    cout << "Elements at idx 2 " << arr[2] << endl;
    cout << "Element at idx 2 " << *(arr + 2) << endl; 

    int i = 2;
    //i[arr] = *(arr + i);
    cout << i[arr] << endl;

    cout << *(arr + i) << endl;

    cout << "temp " << endl;
    int temp[10];
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;//sizeof pointer

    int *p = &temp[0];
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;//first block memory
    cout << sizeof(&p) << endl;//how much memory required by pointer to store value

    cout << "n " << endl;  
    int n[10] = {23,43};
    cout << n << endl;//address of first element
    cout << &n << endl;//address of first element
    cout << "->" << &n[0] << endl;//address of first element

    int *ptr = &n[10];
    cout << "->" << &ptr << endl;//address of the pointer
    cout << *ptr << endl;
    cout << ptr << endl;//storing the address of n
}