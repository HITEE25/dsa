#include<iostream>
using namespace std;

/*
void unique(int arr[],int n,int x){
    int count;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            count++;
        }
    }
    if(count > 1){
        cout << "It is not unique\n";
    }
    else{
        cout << "It is unique\n";
    }
}
*/

void unique(int *arr,int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout << ans;
}

int main(){
    int arr[100];

    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    if(n%2 == 0){
        cout << "Enter odd number\n";
    }
    else{
        cout << "Enter the elements of array\n";
        for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    /*
    int x;
    cout << "Enter the element which you want to check\n";
    cin >> x;
    unique(arr,n,x);
    */
    unique(arr,n);
}
}