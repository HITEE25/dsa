#include<iostream>
using namespace std;

void ascending(int arr[],int n){
    for(int i=0,j=i+1;i<n;i++,j++){
        if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

void print(int arr[],int n){
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
        cin >> arr[i];
    }
    ascending(arr,n);
    print(arr,n);
}