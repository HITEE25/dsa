/*
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j,num = 1;

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << num << " ";
            j++;
            num++;
        }
        cout << endl;
        i++;
    }
}