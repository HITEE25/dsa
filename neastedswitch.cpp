#include<iostream>
using namespace std;

int main(){
    int n = 2;
    char ch  = 'A';
    cout << endl;
    switch(n){
        case 1 : cout << "second" << endl;
        break;
        case 2 : 
        switch(ch){
        case 'A' : cout << "Char A" << endl;
        break;
        case 'B' : cout << "Char B" << endl;
        }
        break;
        case 3 : cout << "second" << endl;
        break;
        default : cout << "second" << endl;
    
    }
}