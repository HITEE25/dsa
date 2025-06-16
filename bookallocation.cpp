#include<iostream>
using namespace std;

bool possible(int arr[],int n,int student,int mid){
    int pagesum = 0;
    int studentc = 1;
    for(int i=0;i<n;i++){
        if( pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentc++;
            if(studentc > student || arr[i] > mid){
                return false;
            }
            pagesum = 0;
            pagesum += arr[i];
        }
    }
    return true;
}

int allocatebook(int arr[],int n, int student){
    int s = 0;
    int ans = -1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    while(s <= e){
        int mid  = s + (e - s)/2;
        if(possible(arr,n,student,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[10];
    int n;
    cout << "Enter the number of elements of array\n";
    cin >> n;
    cout << "Enter the elements of array & in such a way that it forms accending order\n";
    for(int i = 0 ;i < n ; i++){
        cin >> arr[i];
    }
    int student;
    cout << "Enter the number of students\n";
    cin >> student;
    int ans = allocatebook(arr,n,student);
    cout << ans;
}