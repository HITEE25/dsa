#include<iostream>
using namespace std;

int main(){
    int arr[15];//accessing an array
    cout << "Value at 14 index is " << arr[14] << endl;

    int arrone[3] = {34,6,8};//intialising an array
    cout << "Value at 2 index is " << arrone[2] << endl;

    int arrs[15] = {34,67,8};
    cout << "Print the array " << endl;
    for(int i=0;i<15;i++){
        cout << arrs[i] << " ";
    }

    int arrt[15] = {0};
    cout << endl <<"Print the array" << endl;
    for(int i=0;i<15;i++){
        cout << arrt[i] << " ";
    }
}
