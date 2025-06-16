#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int i = 2;
    int flag = 0;

    if(n <= 1){
        cout << "Not a prime number\n";
        return 0;
    }
    else{
    while(i*i <= n){
        if(n%i == 0){
            flag = 1;
            break;
        }
        i++;
    }
}
if(flag){
    cout << "Not a prime number\n";
}
else{
    cout << "Prime number\n";
}
}