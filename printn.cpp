#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of number\n";
    cin >> n;
    
    cout << "Printing count from 1 to n\n";
    
    for(int i=1;i<=n;i++){
        cout << i << endl;
    }
    cout << "without using for loop\n";
    int j=1;
    for( ; ; ){//for do not know where to stop
        if(j <= n){
            cout << j << endl;
        }else{
            break;
        }
        j++;
    }
    for(int a=1,b=2,c=3; a>=1 && b>=2 && c>=3;a--,b--,c--){
        cout << a << " " << b << " " << c << endl;
    }
}