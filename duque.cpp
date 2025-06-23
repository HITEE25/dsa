#include <iostream>
#include<queue>
using namespace std;

int main() {
    // Write C++ code here
    deque<int> d;
    d.push_front(12);
    d.push_back(25);
    
    cout << d.front() << endl;
    cout << d.back() << endl;
}
