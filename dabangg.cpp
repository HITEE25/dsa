/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows\n";
    cin >> n;
    int i,j,k,l,m;

    i = n;
    while(i >= 1){
        j = 1;
        while(j <= i){
            cout << j << " ";
            j++;
        }
        k = n -i;
        while(k >= 1){
            cout << "* " ;
            k--;
        }
        l = n -i;
        while(l >= 1){
            cout << "* ";
            l--;
        }
        m = i;
        while(m >= 1){
            cout << m << " ";
            m--;
        }
        cout << endl;
        i--;
    }
}