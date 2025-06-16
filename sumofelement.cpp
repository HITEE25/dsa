#include<iostream>
using namespace std;

int sumarr(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int n;
    cout << "Enter the size of array\n";
    cin >> n;

    cout << "Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Sum of elements of array is " << sumarr(arr,n);
}