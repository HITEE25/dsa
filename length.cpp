#include<iostream>

using namespace std;

int getlength(char ch[]){
    int count = 0;
    for(int i=0;ch[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[100];
    cout << "Enter your name " << endl;
    cin  >> name;

    cout << "Your name is ";
    cout << name << endl;
    cout << "length " << getlength(name);
}