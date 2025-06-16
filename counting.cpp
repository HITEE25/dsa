#include<iostream>
using namespace std;

void counting(int n){
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    counting(n);
}