/*
A B C
D E F
G H I
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
        while(j <= n){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    i = 1;
    
   /* while(i <= n){
        j = 1;
        char c = 'A' ;
        while(j <= n){
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/
}