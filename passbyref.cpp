#include<iostream>
using namespace std;

void update(int &n){
    n++;
}

int& update1(int a){
    int n = a;
    int& ans = n;
    return ans;//bad practice
}//will gave warning

int* update2(int n){
    int* ptr = &n;
    return ptr;
}//bad practice
//will gave warning


int main(){
    int n=9;
    cout << "before " << n << endl;
    update(n);
    cout << "After " << n << endl;
    int ans = update1(n);
    cout << ans << endl;
    int* ans2 = update2(n);
    cout << *ans2 << endl; 
}