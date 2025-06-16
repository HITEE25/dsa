#include<iostream>
using namespace std;

int power(int a,int n){
    int pow = 1;
    for(int i=1;i<=n;i++){
        pow = pow*a;
    }
    return pow;
}

int pow(){
    int p,x;
    cin >> p >> x;
    int pow = 1;
    
    for(int i=1;i<=x;i++){
        pow = pow*p;
    }
    return pow;
}

int main(){
    int a,n;
    cout << "Enter the value of a and n\n";
    cin >> a >> n;
    cout << "Answer is " << power(a,n) << endl;

    int b,c;
    cout << "Enter the value of b and c\n";
    cin >> b >> c;
    cout << "Answer is " << power(b,c) << endl;

    int d,e;
    cout << "Enter the value of d and e\n";
    cin >> d >> e;
    cout << "Answer is " << power(d,e) << endl;

    int ans = pow();
    cout << "Answer is " << ans << endl;

    ans = pow();
    cout << "Answer is " << ans << endl;

    ans = pow();
    cout << "Answer is " << ans << endl;
}