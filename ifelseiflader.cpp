#include<iostream>
using namespace std;

int main(){
    char ch1;
    cout << "Enter the char" << endl;
    cin >> ch1;
    if((ch1 >= 'a') && (ch1 <= 'z')){
        cout << "The alphabet is in lower case" << endl;
    }
    else if((ch1 >= 'A') && (ch1 <= 'Z')){
        cout << "The alphabet is in upper case" << endl;
    }
    else{
        cout << "It is a number" << endl;
    }
}