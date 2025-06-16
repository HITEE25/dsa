#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter choice between 1 to 4\n";
    cin >> n;

    /*switch(n){
        case 1 : cout << "Hitee" << endl;
        continue;
        case 2 : cout << "Hitee" << endl;
        continue;
        case 3 : cout << "Hitee" << endl;
        continue;
        case 4 : cout << "Hitee" << endl;
        continue;
        default : cout << "Hitee" << endl;
        continue;  
    }*/
   for(int i=0;i<5;i++){
    switch(n){
        case 1 : cout << "FRUIT" << endl;
        continue;
        case 2 : cout << "BANANA" << endl;
        continue;
        case 3 : cout << "APPLE" << endl;
        continue;
        case 4 : cout << "PINEAPPLE" << endl;
        continue;
        default : cout << "NOT VALID" << endl;
        continue;  
    }
    }
}