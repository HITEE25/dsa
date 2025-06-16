#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_front(1);
    d.push_back(0);
    d.push_front(9);
    d.push_back(5);
    d.push_front(7);
    d.push_back(3);

    for(int i:d){
        cout << i << " ";
    }cout << endl;

    d.pop_back();
    d.pop_front();
    cout << "After poping" << endl;
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    cout << "Element at index 2 " << d.at(2) << endl;
    cout << "First element is " << d.front() << endl;
    cout << "Second element is " << d.back() << endl;
    cout << "Check array is empty or not " << d.empty() << endl;

    cout << "Before erasing" << endl;
    for(int i:d){
        cout << i << " ";
    }cout << endl;
    cout << "After erasing" << endl;
    d.erase(d.begin(),d.begin() + 2);
    for(int i:d){
        cout << i << " ";
    }cout << endl;
}