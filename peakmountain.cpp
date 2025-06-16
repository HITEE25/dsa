#include<iostream>
using namespace std;

int binarySearch(int arr[],int n){
    int s = 0;
    int e = n-1;
    if(s>e) return -1;

    int mid = s + (e-s)/2;
    if(arr[mid] < arr[mid + 1]) return binarySearch(arr,mid+1);
    else return binarySearch(arr,mid);
}

int main(){
    int arr[6] = {1,3,9,2,5,7};
    int n = 6;

    cout << "Peak value is " << binarySearch(arr,n) << endl;
}