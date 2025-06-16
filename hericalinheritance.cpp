#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return age;
    }

    void setHeight(int h){
        this->height = h;
    }
};

class female: public human{
    public:
    string color;
    string hair;

    void sleep(){
        cout << "Female is sleeping " << endl; 
    }
};

class male: public human{
    public:
    string color;

    void sleep(){
        cout << "Female is sleeping " << endl; 
    }

    void setAge(int a){
        this->age = a;
    }

    int getAge(){
        return age;
    }

};

int main(){
    female f;
    f.hair;
    male m;
    m.hair;
}