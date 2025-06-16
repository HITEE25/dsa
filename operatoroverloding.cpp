#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (B &object){
        int value1 = this->a;
        int value2 = object.a;
        cout << "output " << value2-value1 << endl;
        //cout << "Hitee" << endl;
    }

    void operator() (){
        cout << "I am bracket " << this->a << endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 5;
    obj1 + obj2;
    obj2();
}