#include<iostream>
using namespace std;

void print(int arr[],int n,int start = 0){
    for(int i=start; i<n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    int arr[5] = {1,4,6,3,9};
    int n = 5;
    print(arr,n);
    print(arr,n,2);
}