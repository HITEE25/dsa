#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout << sizeof(ch) << endl;
    char *c = &ch;
    cout << sizeof(c) << endl;
    char *ch1 = new char;
    cout << sizeof(ch1) << endl;
}