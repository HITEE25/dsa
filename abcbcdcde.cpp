/*

A B C
B C D
C D E

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
        while(j <= n){
            cout << c << " ";
            j++;
            c++;
        }
        cout << endl;
        i++;
        ch++;
    }
    cout << endl;

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= n){
            char ch1 = 'A' +i +j -2;
            cout << ch1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

}