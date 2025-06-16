#include<iostream>

using namespace std;

int getlength(char* ch){
    int count = 0;
    for(int i=0 ;ch[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    name[3] = '\0';
    
    cout << "Your name is " << name << endl;
    cout << "length " << getlength(name);
}