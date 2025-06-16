#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the value of a ";
    cin >> a;

    if(a>0){
        cout << "a is positive ";
    }
    else{
        if(a<0){
            cout << "a is negative ";
        }
        else{
            cout << "a is 0 ";
        }
    }

    /*

    if(a>0){
    cout << "a is positive";
    }
    else if(a<0){
            cout << "a is negative";
    }
    else{
            cout << "a is 0";
    }

    */

}