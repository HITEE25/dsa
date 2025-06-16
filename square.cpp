/*
* * * *
* * * *
* * * *
* * * *
*/

#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout << "Enter number of rows and cols\n";
    cin >> rows >> cols;
    int j;
    if( rows == cols){
        int i = 1;
        while(i <= rows){
            j = 1;
            while(j <= cols){
                cout << "* ";
                j++;
            }
            cout << "\n";
            i++;
        }
    }
    else{
        cout << "please enter number of rows and cols equal\n";
    }
}

