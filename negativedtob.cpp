#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int i = 0;
    int ans = 0;
    n = n & 0xFF;


    while(n != 0){
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout << ans;
}