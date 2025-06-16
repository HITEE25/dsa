#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(7);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(7);
    s.insert(7);

    for(int i:s){
        cout << i << " ";
    }cout << endl;//sorts the array and give unique numbers

    cout << "After erasing" << endl;

    s.erase(s.begin());
    for(int i:s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(int i:s){
        cout << i << " ";
    }cout << endl;

    cout << "3 is present or not->" << s.count(3) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "Element is at iterator->" << *it << endl;

    for(auto it=itr;it!=s.end();it++){
        cout << *it << " ";
    }cout << endl;
}