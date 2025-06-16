#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int idnumber;
    public:
    string getName(){
        return this->name;
    }
    void setName(string n){
        name = n;
    }
};

int main(){
    Student s1;
    s1.setName("Hitee");
    cout << s1.getName() << endl;
}