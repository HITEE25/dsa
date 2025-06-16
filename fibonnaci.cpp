#include<iostream>
using namespace std;

void fibonnaci(int n){
    int first = 0,second = 1;
    int third;
    for(int i=0;i<n;i++){
        if(i == 0){
            cout << first << " ";
        }
        else if(i == 1){
            cout << second << " ";
        }
        else{
            third = first + second;
            first = second;
            second = third;
            cout << third << " ";
        }
    }
}

int main(){
    int n;
    cout <<"Enter the number of sequence\n";
    cin >> n;
    fibonnaci(n);
}