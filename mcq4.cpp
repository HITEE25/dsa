#include<iostream>
using namespace std;

int main(){
    int *p = 0;
    int n = 110;
    *p = n;//p = &n then works
    cout << *p << endl;
}