#include<iostream>
using namespace std;

class hello{
    public:
    void sayHello(){
        cout << "Hello World" << endl;
    }
    void sayHello(string n){
        cout << "Hello " << n << endl;
    }
    int sayHello(int n){
        cout << "Hello " << n << endl;
        return 0;
    }
    int cordinates(int x,int y,int z=0,int w=0){
        return (x+y+z+w);
    }
};

int main(){
    hello h;
    h.sayHello();
    h.sayHello("world");
    h.sayHello(6);
    cout << h.cordinates(20,30) << endl;
    cout << h.cordinates(20,30,40) << endl;
    cout << h.cordinates(20,30,40,30) << endl;
}