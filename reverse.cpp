#include<iostream>

using namespace std;

int length(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int length){
    
    for(int i=0,j=length-1; i<j; i++,j--){
        swap(name[i],name[j]);
    }
}

int main(){
    char name[100];
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Before reverse " << name << endl;
    int len = length(name);
    reverse(name,len);
    cout << "After reverse " << name << endl;
}