/*

    1
  2 3 
4 5 6

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;
    int num = 1;

    i = 1;
    while(i <= n){
        j = 1;
        int k = 1;
        while(k <= n -i){
            cout << "  ";
            k++;
        }
        while(j <= i){
            cout << num << " ";
            j++;
            num++;
        }
        cout << endl;
        i++;
    }
}