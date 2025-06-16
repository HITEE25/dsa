#include<iostream>
using namespace std;

int main(){
    int a,n;
    cout << "Enter the value of a and n\n";
    cin >> a >> n;
    int pow = 1;

    for(int i=1;i<=n;i++){
        pow = pow*a;
    }
    cout << "Answer is " << pow ;
}