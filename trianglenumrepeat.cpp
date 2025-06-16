/*

1
2 3
3 4 5
4 5 6 7

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << i+j-1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    /*
    i = 1;
    while(i <= n){
        j = 1;
        int val = i;
        while(j <= i){
            cout << val << " ";
            j++;
            val++;
        }
        cout << endl;
        i++;
    }
        */


}