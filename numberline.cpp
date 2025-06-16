/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows\n";
    cin >> rows;
    int i,j;
     
    i = 1;
    while(i <= rows){
        j = 1;
        while(j <= rows){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

}