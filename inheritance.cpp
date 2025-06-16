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

    void sleep(){
        cout << "Female is sleeping " << endl; 
    }
};

class male: private human{
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
    female f1;
    f1.setHeight(23);
    f1.age = 19;
    f1.weight = 35;
    f1.color = "Black";

    cout << "female height "<< f1.height << endl;
    cout << "female weight "<< f1.weight << endl;
    cout << "female age "<< f1.age << endl;
    cout << "female color "<< f1.color << endl;


    male m1;
    m1.setAge(24);
    cout << "male age " << m1.getAge() << endl;
    m1.print();
    
}