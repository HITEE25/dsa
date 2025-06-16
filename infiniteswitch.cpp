#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "make choice between 1 to 4" << endl;
    cin >> n;

    while(1){
        switch(n){
            case 1 : cout << "burger" << endl;
            break;
            case 2 : cout << "Pizza" << endl;
            break;
            case 3 : cout << "Kheer" << endl;
            break;
            case 4 : cout << "Panner" << endl;
            break;
            default : cout << "Not valid" << endl;
        }
        exit(n);
    }
}