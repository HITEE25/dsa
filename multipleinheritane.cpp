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

class animal1{
    public:
    void sleep(){
        cout << "Sleeping" << endl;  
    }
};

class female: public animal,public animal1{
};

int main(){
    female f;
    f.speak();
    f.sleep();
}