#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    for(int i=0,j=v.size()-1 ;i<j ; i++,j--){
        swap(v[i],v[j]);
    }
    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> ans = reverse(v);
    print(ans);
    return 0;
}