//find maximum and minimum value in array
#include<iostream>
using namespace std;

int maxarr(int arr[],int n){//you can use INT_MIN instead of arr[0]
    int max = arr[0];//int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];//maxi = max(maxi,arr[i]);
        }
    }
    return max;//return maxi
}

int minarr(int arr[],int n){//you can use INT_MIN instead of arr[0]
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];//using variable is not a good pratice , arr[1000] is much better
    cout << "Enter the element of array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Max element is " << maxarr(arr,n) << endl;
    cout << "Min element is " << minarr(arr,n) << endl;
}