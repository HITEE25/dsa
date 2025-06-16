#include<iostream>
using namespace std;

int main(){
    int first = 6;
    int *p = &first;
    int *q = p;//pointing towards value of p
    (*q)++;
    cout << first << endl;
}