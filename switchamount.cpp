#include<iostream>
using namespace std;

int main(){
    int amount = 1330;
    int hundred = 0,fifty = 0,twenty = 0,one = 0;

    switch(1){//dummy case to run code sequentially
        case 1: hundred = amount/100;
        amount %= 100;//update amount value
        case 2: fifty = amount/50;
        amount %= 50;
        case 3: twenty = amount/20;
        amount %= 20;
        case 4: one = amount/1;
        amount %= 1;
    }
    cout << "Note of 100 " << hundred << endl;
    cout << "Note of 50 " << fifty << endl;
    cout << "Note of 20 " << twenty << endl;
    cout << "Note of 1 " << one << endl;
    }
