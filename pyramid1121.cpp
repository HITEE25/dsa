/*
          1
        1 2 1
      1 2 3 2 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j,k,l;

    i = 1;
    while(i <= n){
        k = 1;
        while(k <= n -i){
            cout << "  ";
            k++;
        }
        j = 1;
        while(j <= i){
            cout << j << " ";
            j++;
        } 
        l = i -1;
        while(l >= 1){
            cout << l << " ";
            l--;
        }
        cout << endl;
        i++;    
    }
}