/*

A B C
A B C
A B C

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;
    char ch;

    i=1;
    while(i <= n){
        ch = 'A';
        j = 1;
        while(j <= n){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    i=1;
    while(i <= n){
        j = 1;
        while(j <= n){
            char ch = 'A' +j -1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}