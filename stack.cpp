#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Preet");
    s.push("Mihu");
    s.push("Mishu");

    cout << "Top element is " << s.top() << endl;
    s.pop();
    cout << "Top element is " << s.top() << endl;
    cout << "Size->" << s.size() << endl;
    cout << "stack is empty or not " << s.empty() << endl;
}