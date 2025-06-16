#include<iostream>
using namespace std;

class Hero{
    //properties
    public:
    char name[100];

    Hero(){
        cout << endl;
        cout << "Contructor " << endl;
        cout << endl;
    }

    char getLevel(){
        return level;
    }

    void setLevel(char l,int health){
        if(health == 70)
        level = l;
    }

    int health;
    private:
    char level;

    void print(){
        level = 'd';
        cout << level << endl;
    }
};

int main(){
    //creation of hero type object
    Hero h1;//static allocation
    cout << "size of h1 " <<sizeof(h1) << endl;
    cout << endl;

    h1.health = 90;
    h1.setLevel('A',70);

    cout << "size-> " << sizeof(h1) << endl;
    cout << endl;
    cout << "Health is " << h1.health << endl;
    cout << "Level is " << h1.getLevel() << endl; 

    //dyamic allocation
    Hero *h = new Hero;

    h->health = 100;
    h->setLevel('B',70);

    cout << "size-> " << sizeof(h) << endl;
    cout << endl;
    cout << "Health is " << (*h).health << endl;
    cout << "Level is " << (*h).getLevel() << endl; 

}