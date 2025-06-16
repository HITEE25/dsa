/*

A
B B
C C C

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;

    i = 1;
    char ch = 'A';
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            char ch = 'A' +i -1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
}