#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Mihu";
    m[3] = "Vency";
    m[2] = "Preet";
    m[9] = "Hitee";

    m.insert(make_pair(4,"Mishu"));
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    cout << "Finding 9->" << m.count(9) << endl;

    m.erase(9);
    cout << "After erasing" << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    auto it = m.find(2);

    cout << "Element is at " << (*it).first << endl;

    for(auto i=it;i!=m.end();i++){
        cout << (*i).first << endl;
    }
}