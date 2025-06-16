#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;
    /*
    int i=2;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum of all even numbers " << sum;
    */

int i=1;
int sum = 0;
while(i <= n){
    if(i%2 == 0){
      sum = sum + i;
    }
    i++;
}
cout << "sum of all even numbers " << sum;
return 0;
}