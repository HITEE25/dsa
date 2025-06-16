/*

1 2 3 4
  2 3 4
    3 4
      4

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
        j = 1;
        l = 1;
        k = i;
        while(l <=  i -1){
            cout << "  ";
            l++;
        }
        while(j <= n -i +1){
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}