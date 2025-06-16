#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        cout << "Not a prime number\n";
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    if(isPrime(n)){
        cout << "Prime number\n";
    }
    else{
        cout << "Not a prime number\n";
    }
}
