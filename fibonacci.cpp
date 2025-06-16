#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n\n";
    cin >> n;
    int a,b,c;
    a = 0;
    b = 1;

    for(int i=0;i<n;i++){
        if(i == 0){
            cout << a << " ";
        }
        else if(i == 1){
            cout << b << " ";
        }
        else{
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
}