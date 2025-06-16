/*
1 2 3 
4 5 6 
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the numer of rows\n";
    cin >> n;
    int i,j,num;
    num = 1;

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
}