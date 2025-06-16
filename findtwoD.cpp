#include<iostream>
using namespace std;

bool targetfound(int arr[][4],int key,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    //int arr[3][4] = {1,23,34,55,2,67,78,56,4,89,99,34};
    //coloumns wise printing
    //int arr[3][4] = {{1,2,3,12},{4,5,6,13},{7,8,9,14}};
    cout << "Enter the elements of array" << endl;
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

    int target;
    cout << "Enter the target " << endl;
    cin >> target;

    if(targetfound(arr,target,3,4)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}
