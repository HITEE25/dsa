#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin >> row >> col;

    int **arr = new int *[row];

    cout << "Enter the elements of array" << endl;
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //releasing array or deleting array
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
}