#include<iostream>
#include<vector>

using namespace std;

void mergesort(vector<int> v1,int n1,vector<int> v2,int n2,vector<int>& v3){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(v1[i] < v2[j])
            v3.push_back(v1[i++]);
        else
            v3.push_back(v2[j++]);
    }
    while(i < n1){
        v3.push_back(v1[i++]);
    }
    while(j < n2){
        v3.push_back(v2[j++]);
    }
}

void print(vector<int> v3){
    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }cout << endl;
}

int main(){
    int n1;
    cin >> n1;
    vector<int> v1(n1);
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        cin >> v1[i];
    }
    for(int i=0;i<n2;i++){
        cin >> v2[i];
    }
    vector<int> v3;

    mergesort(v1,n1,v2,n2,v3);

    print(v3);
}