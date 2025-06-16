/*

A
B C
D E F
G H I J

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;
    char ch;

    i = 1;
    ch = 'A';
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}