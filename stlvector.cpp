#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout << "Capacity->" << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(7);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(9);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    cout << "Element at index 3rd->" << v.at(3) << endl;
    cout << "First element is->" << v.front() << endl;
    cout << "Last element is->" << v.back() << endl;

    cout << "Before pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    cout << "Before clear" << endl;
    cout << "size->" << v.size() << endl;
    v.clear();
    cout << "After clear" << endl;
    cout << "size->" << v.size() << endl;

    vector<int> a(5,1);
    cout << "Print a" << endl;
    for(int i:a){
        cout << i << " ";
    }cout << endl;

    vector<int> b(a);
    cout << "Print b" << endl;
    for(int i:b){
        cout << i << " ";
    }cout << endl;
}