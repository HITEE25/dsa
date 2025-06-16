//find 2 to the power 2^x
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int temp = n;
    int flag = 0;
    // 10 is not actually 2^1.
    //The reason this happens is: your code currently prints the position of the first set bit from the right but it doesn't check if there's only one set bit in the entire number.
    /*
       n      = 10000
    n - 1     = 01111
    -----------------
    n & (n-1) = 00000
    */
    if((n & (n-1)) != 0){
        cout << n << " is not power of 2" << endl;
    }
    else{
    int x = 0;
    while(temp != 0){
        int bit = temp&1;
        if(bit == 1){
            cout << n << " is 2^" << x << endl;
        }
        temp = temp >> 1;
        x++;
    }
}
   
}