#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    bool isPrime = 1;

    if(n <= 1){
        cout << "Not a prime number\n";
    }

    for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
    }

    if(isPrime){
        cout << "Prime number" << endl;
    }
    else{
        cout << "Not a prime number" << endl;
    }
}