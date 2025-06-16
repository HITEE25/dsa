#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max
    priority_queue<int> maxi;
    //min
    priority_queue<int , vector<int> , greater<int> > mini;

    maxi.push(4);
    maxi.push(9);
    maxi.push(6);
    maxi.push(7);
    maxi.push(1);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    mini.push(4);
    mini.push(5);
    mini.push(2);
    mini.push(1);
    mini.push(6);

    int x = mini.size();
    for(int i=0;i<n;i++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "Priority queue is empty or not->" << mini.empty() <<endl;
}