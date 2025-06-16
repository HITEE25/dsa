#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(5);
    l.push_front(0);
    l.push_back(6);
    l.push_front(4);
    l.push_back(7);
    l.push_front(3);
    for(int i:l){
        cout << i << " ";
    }cout << endl;
    l.pop_back();
    l.pop_front();
    for(int i:l){
        cout << i << " ";
    }cout << endl;

    cout << "First element is " << l.front() << endl;
    cout << "Last element is " << l.back() << endl;
    cout << "Size->" << l.size() << endl;
    
    l.erase(l.begin());
    cout << "After erasing " << endl;
    for(int i:l){
        cout << i << " ";
    }cout << endl;

    list<int> n(l);
    for(int i:n){
        cout << i << " ";
    }cout << endl;

    list<int> t(5,101);
    for(int i:t){
        cout << i << " ";
    }cout << endl;
}