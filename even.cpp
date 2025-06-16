#include<iostream>
using namespace std;

bool isEven(int a){
    if((a&1) == 1){//odd number
        return 0;
    }//even number
    return 1;
}

int main(){
    int a;
    cout << "Enter the number\n";
    cin >> a;

    if(isEven(a)){
        cout << "Even number" << endl;
    }
    else{
        cout << "odd number" << endl;
    }
}