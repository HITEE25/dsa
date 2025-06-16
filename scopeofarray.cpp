#include<iostream>
using namespace std;

void displayarr(int arr[],int n){
    cout << "Inside the function" << endl;
    arr[0] = 30;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
}
cout << "\nGoing back to main function\n";
}

int main(){
    int arr[5] = {4,7,8,9,5};
    displayarr(arr,5);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
}
}