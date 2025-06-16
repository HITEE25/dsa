#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    //a = cin.get();

    cout << "value of a and b is " << a << " and " << b << " respectively" << endl; 
    if(a>b){
        cout << "a is greater then b and a is " << a << endl;
    }
    else{
        cout << "b is greater then a and b is " << b << endl;
    }
}