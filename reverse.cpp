#include<iostream>
using namespace std;

void reverse(string& name,int i,int j){
    if(i>j){
        return;
    }
    else{
        swap(name[i],name[j]);
        i++;
        j--;
        reverse(name,i,j);
    }
}

int main(){
    string name = "Mihu";
    int size = name.length();
    reverse(name,0,size-1);
    cout << name << endl;
}