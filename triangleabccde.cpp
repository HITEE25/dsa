/*
A
B C
C D E
D E F G
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
        char c = ch;
        while(j <= i){
            cout << c << " ";
            c++;
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
            char ch1 = 'A' +i +j -2;
            cout << ch1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}