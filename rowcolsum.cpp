#include<iostream>
using namespace std;

void printRowsum(int arr[][4],int n,int m){
    for(int row=0;row<n;row++){
        int sum = 0;
        for(int col=0;col<m;col++){
            sum += arr[row][col];
        }
        cout << "Row sum of " << row << " is " << sum << endl;
    }
}

void printColsum(int arr[][4],int n,int m){
    for(int col=0;col<m;col++){
        int sum = 0;
        for(int row=0;row<n;row++){
            sum += arr[row][col];
        }
        cout << "Col sum of " << col << " is " << sum << endl;
    }
}


int main(){
    int arr[3][4];
    //int arr[3][4] = {1,23,34,55,2,67,78,56,4,89,99,34};
    //coloumns wise printing
    //int arr[3][4] = {{1,2,3,12},{4,5,6,13},{7,8,9,14}};
    cout << "Enter the elements" << endl;
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin >> arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printRowsum(arr,3,4);
    cout << endl;
    printColsum(arr,3,4);
}