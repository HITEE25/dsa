#include<iostream>
using namespace std;

int  prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    if(prime(n)){
        cout << n << " is prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }
}