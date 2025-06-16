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

    i = n ;
    while(i >= 0){
        int k = 1;
        while(k <=  n -i){
            cout << "  ";
            k++;
        }
        j = 1;
        while(j <= i){
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }

    i = 1;
    while(i <= n){
        int k = 1;
        while(k <=  i - 1){
            cout << "  ";
            k++;
        }
        j = 1;
        while(j <= n -i +1){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}