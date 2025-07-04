#include<iostream>
using namespace std;

void print(int arr[],int s , int e){
    for(int i=s;i<=e;i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int arr[],int s,int e,int k){
    cout << endl;
    print(arr,s,e);
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binarySearch(arr,mid+1,e,k);
    }else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6] = {3,6,7,8,9,10};
    int size = 6;

    if(binarySearch(arr,0,5,9)){
        cout << "Element was found " << endl;
    }
    else{
        cout << "Element was not found " << endl;
    }
}