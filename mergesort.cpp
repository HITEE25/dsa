#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - s;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int k = s;
    for(int i=0;i<len1;i++){
        arr1[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0;i<len2;i++){
        arr2[i] = arr[k++];
    }
    k = s;
    int idx1 = 0;
    int idx2 = 0;
    while(idx1 < len1 && idx2 < len2){
        if(arr1[idx1] < arr2[idx2]){
            arr[k++] = arr1[idx1++];
        }
        else{
            arr[k++] = arr2[idx2++];
        }
    }
    while(idx1 < len1){
        arr[k++] = arr1[idx1++];
    }
    while(idx2 < len2){
        arr[k++] = arr2[idx2++];
    }
}

void mergeSort(int arr[],int s,int e){
    //base case
    if(s >= e) return;

    int mid = s + (e-s)/2;
    //right
    mergeSort(arr,s,mid);

    //left
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

}

int main(){
    int arr[6] = {1,2,3,2,5,6};
    int n = 6;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}