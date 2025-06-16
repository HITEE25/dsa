#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linear(int arr[],int size,int key){
    print(arr,size);
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    int remainingPart = linear(arr+1,size-1,key);
    return remainingPart;
}

int main(){
    int arr[6] = {2,6,8,5,7,4};
    int size = 6;
    
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    int ans = linear(arr,size,n);
    if(ans){
        cout << "the key had been found" << endl;
    }
    else{
        cout << "The key not found" << endl; 
    }
 }