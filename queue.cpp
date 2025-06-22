#include<iostream>
using namespace std;

int main(){
  queue<int> q;

  q.push(12);
  cout << "Front of queue is " << q.front();
  q.push(34);
  cout << "Front of queue is " << q.front();
  q.push(89);
  cout << "Front of queue is " << q.front();
  cout << "Size of the queue is " << q.size() << endl;

  q.pop();

  cout << "Size of the queue is " << q.size() << endl;

  if(s.empty()){
    cout << "Queue is empty " << endl;
  }
  else{
    cout << "Queue is not empty " << endl;
  }
}
