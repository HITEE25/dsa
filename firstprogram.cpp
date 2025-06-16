#include<iostream>
using namespace std;

int main(){
    cout << "Namsate dunia :)" << endl;
    int a = 2;
    cout << a << endl;
    char b = 'p';
    cout << b << endl;
    bool c = true;
    cout << c << endl;
    double d = 123;
    cout << d << endl;
    float e = 1.2;
    cout << e << endl;
    int size = sizeof(d);
    cout << "size of d is " << size << endl;
    char ch1 = 64;
    cout << ch1 << endl;
    int ch2 = 'y';
    cout << ch2 << endl;
    char ch3 = 123456;
    cout << ch3 << endl; 
    unsigned int f = 12;
    cout << f << endl;
    unsigned int g = -56;
    cout << g << endl;

    int h = 9;
    int i = 4;

    bool first = (h==i);
    bool second = (h<=i);
    bool third = (h>=i);
    bool fourth = (h!=i);
    bool fifth = (h>i);
    bool sixth = (h<i);

    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << fourth << endl;
    cout << fifth << endl;
    cout << sixth << endl;

    bool seventh = ((h>=i) && (h>i));
    cout << seventh << endl;
    bool eighth = ((h>=i) || (h<i));
    cout << eighth << endl;
}