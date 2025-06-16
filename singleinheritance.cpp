#include<iostream>
using namespace std;

class animal{
    public:
    int height;
    int weight;
    int age;

    void speak(){
        cout << "Speaking" << endl;
    }
};

class dog: public animal{
    public:
};

int main(){
    dog d;
    d.speak();
}
