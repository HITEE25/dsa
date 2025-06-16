#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    int e = n;
    int ans;
    while(s <= e){
        int mid  = s + (e - s)/2;
        long long sq = mid * mid;
        if(sq < n){
            ans = mid;
            s = mid + 1;
        }
        else if(sq > n){
            e = mid - 1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

double precise(int n , double sol , int precise){
    double factor = 1;
    for(int i = 0; i<precise ; i++){
        factor = factor/10;
        for(double j = sol ; j*j<n ; j =j+factor){
            sol = j;
        }
    }
    return sol;
}

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;

    int sol = binarySearch(n);
    cout << "sqrt is  " << precise(n,sol,3);
}