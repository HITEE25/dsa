#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int dup;
    cout << "Enter the number you want to check\n";
    cin >> dup;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == dup){
            count++;
        }
    }
    if(count > 1){
        return 1;
    }
    return 0;
}


int main(){
    int arr[10];
    int n;
    cout << "Enter the number of array\n";
    cin >> n;
    cout << "Enter the elements of array\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(duplicate(arr,n)){
        cout << "duplicate was found\n";
    }
    else{
        cout << "duplicate was not found\n";
    }
}