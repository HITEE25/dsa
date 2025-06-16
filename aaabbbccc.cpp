/*

A A A
B B B
C C C

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;
    char  ch;

    i = 1;
    ch = 'A';
    while(i <= n){
        j = 1;
        while(j <= n){
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
        while(j <= n){
            char c = 'A' + i - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
}
