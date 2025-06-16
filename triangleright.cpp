/*

      *
    * *
  * * *
* * * *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j,k;

    i = 1;
    while(i <= n){
        k = 1;
        while(k <= n -i){
            cout << "  ";
            k++;
        }
        j = 1;
        while(j <= i){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}