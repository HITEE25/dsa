#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
    char *name;
    static int timeTocomp;
   

    Hero()//<------------------------------// when you delete this it will show error because parameterised construction id deleted
    {                                      //
        cout << endl;                      // 
        cout << "Contructor " << endl;     //
        cout << endl;//Shallow copy        //
        name = new char[100];              //
    };                                     //
    //parameterised construction           //
    Hero(int health)//default construction dies when you create parameterised construction
    {
        cout << "this-> " << this << endl;
        this->health = health;
        name = new char[100]; 
    };

    //multiple parameterised construction
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        name = new char[100]; 
    }

    void print()
    {
        cout << "[ Name-> " << name << endl;
        cout << "Health-> " << health << endl
             << "level-> " << level << " ]" << endl << endl;
    }

    //copy construction
    Hero(Hero& temp){
        cout << "Copy construction called " << endl;
        this->health = temp.health;
        this->level = temp.level;
        //deep copy;
        this->name = new char[strlen(temp.name)+1];
        strcpy(this->name, temp.name);
    }

    char getLevel(){
        return level;
    }

    void setLevel(char l,int health){
        if(health == 70)
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    };

    static int random(){
        return timeTocomp;
    }

    ~Hero(){
        cout << "Destructor called " << endl;
    }
};

int Hero::timeTocomp = 5;

int main()
{
    Hero h1;
    Hero h2;
    h2.print();

    Hero h(40);
    cout << "Address of h " << &h << endl;

    Hero *h3 = new Hero(90);
    h3->print();
    cout << "Adress of h3 " << h3 << endl;

    Hero *h4 = new Hero(80, 'D');
    h4->print();
    cout << "Health-> " << h4->health << endl;
    cout << "Level-> " << h4->level << endl;

    //copy construction
    Hero h5(*h4);
    h5.print();

    Hero hero;
    hero.setLevel('D',70);
    char name[]= "Hitee";
    hero.setName(name);
    hero.print();

    Hero hero1(hero);
    hero1.print();
    cout << "Using deep copy" << endl;
    hero.name[0] = 'P';
    hero.print();
    hero1.print();

    hero = hero1;
    cout << "After coping" << endl;
    hero.print();
    hero1.print();

    cout << "Static memory" << endl;
    cout << Hero::timeTocomp << endl;
    Hero a;
    cout << a.timeTocomp << endl;

    Hero b;
    b.timeTocomp = 10;
    cout << b.timeTocomp << endl;
    cout << a.timeTocomp << endl;

    cout << "Static function " << endl;
    cout << Hero::random() << endl;
}