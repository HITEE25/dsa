#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Drastu");
    q.push("Mihu");
    q.push("Mishu");
    
    cout << "Size before poping " << q.size() << endl;
    cout << "First element is " << q.front() << endl;
    cout << "After poping " << endl;
    q.pop();
    cout << "First elment is " << q.front() << endl;
    cout << "Size after poping " << q.size() << endl;
}