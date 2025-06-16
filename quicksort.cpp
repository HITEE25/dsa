#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] < pivot){
            cnt++;
        }
    }
    int pivotidx = s + cnt;
    swap(arr[pivotidx],arr[s]);
    //sort right and left part
    int i = s,j = e;
    while(i < pivotidx && j > pivotidx){
        while(pivot >= arr[i]){
            i++;
        }
        while(pivot <= arr[j]){
            j--;
        }
        if(i < pivotidx && j > pivotidx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotidx;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s >= e) return ;

    //partition
    int p = partition(arr,s,e);

    //right
    quickSort(arr,s,p-1);

    //left
    quickSort(arr,p+1,e);
}

int main(){
    int arr[6] = {1,9,8,4,6,3};
    int n = 6;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}