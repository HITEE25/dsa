//ap = 3*n + 7;
#include<iostream>
using namespace std;

int ap(int n){
    int ans = 3*n + 7;
    return ans;
}

int main(){
    int n;
    cout << "Enter the number\n";
    cin >> n;

    cout << "nth tearm is " << ap(n) << endl;
}
