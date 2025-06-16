#include<iostream>
using namespace std;

int index(int arr[],int n,int target){
    int i = 0;
    int j = n-1;
    sort(arr,arr + n);
    cout << "Sorted array\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    while(i <= j){
        int mid = i + (j - i)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[10];
    int n;
    cout << "Enter the number of elements\n";
    cin >> n;
    cout << "Enter the elements\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target\n";
    cin >> target;
    int element = index(arr,n,target);
    if(element != -1){
        cout << target << " was found at index " << element;
    }
    else{
        cout << "Element was not found";
    }
}