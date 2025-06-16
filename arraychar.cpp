#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,3,4,5,7};
    int *p = &arr1[0];
    cout << p << endl;

    char arr2[6] = "abcde";//{'a','b','c','d'}
    char *p1 = &arr2[0];
    cout << p1 << endl;

    char temp = 'h';
    char *p3 = &temp;
    cout << p3 << endl;

    char temp1[] = {'a','b','c','d'};
    char *p4 = &temp1[0];
    cout << temp1 << endl;
}