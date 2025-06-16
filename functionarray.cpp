#include<iostream>
using namespace std;

void print(int arr[15],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[15];

    cout << "Enter the elements of array\n";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin >> arr[i];
    }
    print(arr,15);
}