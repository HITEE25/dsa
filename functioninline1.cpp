#include<iostream>
using namespace std;

inline int maxE(int& a,int& b){
    return (a>b)? a : b;
}

int main(){
    int a = 1 , b = 2;
    int maxe = 0;

    maxe = maxE(a,b);
    cout <<  maxe <<  endl;

    a = a + 3;
    b = b + 1;

    maxe = maxE(a,b);
    cout << maxe << endl;

    return 0;
}