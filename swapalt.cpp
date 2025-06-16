#include<iostream>
using namespace std;


void swapalt(int arr[],int n){
    for(int i=0,j=i+1;i<n-1;i+=2,j+=2){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

/*
void swapalt1(int arr[],int n){
    for(int i=0;i<n;i+=2){
    if(i+1 < n){
       swap(arr[i],arr[i+1]);
    }
    }
}
*/


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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
    swapalt(arr,n);
    print(arr,n);
}