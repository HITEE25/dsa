#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << "a&b " << (a&b) << endl;
    cout << "a|b " << (a|b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a^b) << endl;

    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;

    cout << a++ << endl;
    //4 a=5
    cout << ++a << endl;
    //6 a=6
    cout << --a << endl;
    //5 a=5
    cout << a-- << endl;
    //5 a=4

}