#include<iostream>
using namespace std;

bool found(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i] == search){
            return 1;
        }
    }
    return 0;
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
    int search;
    cout << "Enter the element you want to search\n";
    cin >> search;
    bool ans = found(arr,n,search);
    if(ans){
        cout << search <<" number is found";
    }
    else{
        cout << search <<" number is not found";
    }
}