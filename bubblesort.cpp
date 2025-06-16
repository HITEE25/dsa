#include<iostream>
using namespace std;

void sortedArray(int arr[],int n){
    if(n == 0 || n == 1) return ;

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortedArray(arr,n-1);
}

int main(){
    int arr[6] = {9,6,7,2,3,6};
    int n = 6;

    sortedArray(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}