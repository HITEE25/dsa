#include<iostream>
using namespace std;

void sayDigit(int n , string arr[]){
    if(n == 0){
        return ;
    }
    int digit = n % 10;
    n = n / 10;

    sayDigit(n,arr);

    cout << arr[digit] << " ";
}

int main(){
    string arr[10] = {"zero","first","second","third","fourth","fifth","sixth","seventh","eight","ninth"};
    int n;
    cout << "Enter the value" << endl;
    cin >> n;

    cout << "Answer " << endl;
    sayDigit(n,arr);
    cout << endl;
}