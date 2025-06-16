/*

1 1 1 1
  2 2 2
    3 3
      4

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j;

    i = 1;
    while(i <= n){
        j = 1;
        int k = 1;
        while(k <= i -1){
            cout << "  ";
            k++;
        }
        while(j <= n -i +1){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}