#include<iostream>
using namespace std;

int sumArray(int arr[],int size){

    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remainingPart = sumArray(arr+1,size-1);
    return arr[0] + remainingPart;
}

int main(){
    int arr[6] = {3,5,76,34,2,86};
    int size = 6;

    cout << "Sum of array is " << sumArray(arr,size) << endl;
}