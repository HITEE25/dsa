#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1 , size - 1); 
    }
}

int main(){
    int arr[6] = {3,4,6,7,9,10};
    int size = 6;

    int ans = isSorted(arr,size);
    
    if(ans){
        cout << "The array is sorted " << endl;
    }
    else{
        cout << "The array is not sorted " << endl;
    }
}