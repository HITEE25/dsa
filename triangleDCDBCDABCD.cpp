/*

D
C D
B C D
A B C D

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number rows\n";
    cin >> n;
    int i,j;
    char ch;

    i = 1;
    ch = 'A' +n -1;
    while(i <= n){
        j = 1;
        char c = ch;
        while(j <= i){
            cout << c << " ";
            j++;
            c++;
        }
        cout << endl;
        i++;
        ch--;
    }

    i = 1;
    while(i <= n){
        char ch1 = 'A' +n -i;
        j = 1;
        while(j <= i){
            cout << ch1 << " ";
            j++;
            ch1++;
        }
        cout << endl;
        i++;
    }
}