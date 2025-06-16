#include<iostream>
using namespace std;

int sumRow(int *arr,int n){
    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += i[arr];//arr[i]
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int ans = sumRow(arr+3,n-3);//sumRow(arr,n)
    cout << "Row sum is " << ans << endl;
}