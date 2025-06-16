#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printarr(int arr[],int n){
    cout << "printing in reverse\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[100];
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    cout << "Enter the elements of array\n";

    for(int i=0;i<n;i++){
        cin >>  arr[i];
    }
    reverse(arr,n);
    printarr(arr,n);
}