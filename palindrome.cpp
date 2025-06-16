#include<iostream>
using namespace std;

bool checkPalindrome(string& name,int i,int j){
    if(i>j) return true;
    if(name[i] != name[j]) return false;
    else return checkPalindrome(name,i+1,j-1);
}

int main(){
    string name = "abba";
    int size = name.length();

    bool isPalindrome = checkPalindrome(name,0,size-1);

    if(isPalindrome){
        cout << "String is palindrome " << endl;
    }
    else{
        cout << "String is not palindrome " << endl;
    }
}