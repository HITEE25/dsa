#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter value of a and b\n";
    cin >> a >> b;
    int n;
    cout << "Enter the choice from 1-5\n";
    cin >> n;

    switch(n){
            case 1 : cout << "sum = " <<a + b << endl;
            break;
            case 2 : cout << "product = " <<a * b << endl;
            break;
            case 3 : cout << "subtraction = " <<a - b << endl;
            break;
            case 4 : cout << "division =  " << a / b << endl;
            break;
            case 5 : cout << "Modulas = " << a % b << endl;
            break; 
            default : cout << "Not a valid choice" << endl; 
}
}