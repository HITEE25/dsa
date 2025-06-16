/*

* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;

    i = n-1;
    while(i >= 0){
        j = 0;
        while(j <= i){
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
}