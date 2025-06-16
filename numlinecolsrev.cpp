/*
4 3 2 1
4 3 2 1 
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int i,j;
    
    i = 1;
    while(i <= n){
        j=1;
        while(j <= n){
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}