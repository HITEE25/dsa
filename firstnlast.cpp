#include<iostream>
using namespace std;

int firstOccerence(int arr[],int s,int e,int k){
    if(s>e) return -1;

    int mid = s + (e-s)/2;
    if(arr[mid] == k){
        int left = firstOccerence(arr,s,mid-1,k);
        return (left == -1)? mid : left ;
    }

    if(arr[mid] < k) return firstOccerence(arr,mid+1,e,k);
    else return firstOccerence(arr,s,mid-1,k);
}

int lastOccerence(int arr[],int s,int e,int k){
    if(s>e) return -1;

    int mid = s + (e-s)/2;
    if(arr[mid] == k){
        int right = lastOccerence(arr,mid+1,e,k);
        return (right == -1)? mid : right;
    }

    if(arr[mid] < k) return lastOccerence(arr,mid + 1,e,k);
    else return lastOccerence(arr,s,mid-1,k);
}

pair<int,int> binarySearch(int arr[],int n,int k){
    pair<int,int> p;
    p.first = firstOccerence(arr,0,n-1,k);
    p.second = lastOccerence(arr,0,n-1,k);
    return p;
}

int main(){
    int arr[6] = {1,3,5,7,9,9};
    
    pair<int,int> ans = binarySearch(arr,6,3);
    cout << "first--> " << ans.first << " second--> " << ans.second << endl;
}