#include<iostream>
using namespace std;

int print(int n){
    if(n == 1){
        return 1;
    }

    return print(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    cout << "Answer" << endl;

    int ans = print(n);
    cout << ans << endl;
}