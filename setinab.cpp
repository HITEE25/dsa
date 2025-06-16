#include<iostream>
using namespace std;

int setOfaAndb(int a,int b){
    int count = 0;
    while(a != 0){
        int bit = a&1;
        if(bit){
            count++;
        }
        a = a >> 1;
    }
    while(b != 0){
        int bit = b&1;
        if(bit){
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main(){
    int a,b;
    cout << "Enter the value of numbers\n";
    cin >> a >> b;

    cout << "Number of sets in a and b " << setOfaAndb(a,b);
}