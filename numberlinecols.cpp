/*
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;

    i=1;
    while(i <= n){
        j=1;
        while(j <= n){
            cout << j << " " ;
            j++;
        }
        cout << endl;
        i++;
    }
}