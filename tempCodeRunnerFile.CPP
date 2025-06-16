#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Mihu";
    m[3] = "Vency";
    m[2] = "Preet";
    m[9] = "Hitee";

    m.insert( {4,"Mishu"});
    for(auto i:m){
        cout << i.first << " ";
    }cout << endl;
}