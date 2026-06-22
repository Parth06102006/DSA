#include <bits/stdc++.h>
using namespace std;

class Hero {
    private:
        char level;
    public:
        int health = 700;
        char *name;
        static int timeToCComplete ;

        //un-parametized
        Hero() {
            cout<<"constructor is called"<<endl;
            name =  new char[100];
        }
        
        Hero(int health) {
            cout<<"parametized constructor is called"<<endl;
            // yaha par this-> health jo hai we have assigned the class health value over here to the constructor (parametized) i am talking about health over here to the defined health over here so that i can get in the this->health = health right here
            cout<<"this -> "<<this<<endl;
            // here this is the address pointer which gives us us the address of the current object
            this->health = health;
        }
        
        Hero(int health,char level) {
            this->health = health;
            this->level = level;
            cout<<"2 parameter constructor was called"<<endl;
        }

        Hero(Hero &temp)
        //this creates deep copy and default constructor makes shallow copy
        {
            //since i have define it here then the default copy constructor is also no more hence does not exist
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name = ch;
            this->health = temp.health;
            this->level = temp.level;
            cout<<"Health {COPY CONSTRUCTOR} : "<<this->health<<endl;
            cout<<"Level {COPY CONSTRUCTOR} : "<<this->level<<endl;
        }

        void setHealth(int  h)
        {
            health = h;
        }
        
        void setLevel(char l)
        {
            level = l;
        }
        
        void setName(char name[])
        {
            strcpy(this->name,name);
        }

        void print()
        {
            cout<<endl;
            cout<<"Health : "<<this->health<<endl;
            cout<<"Level : "<<this->level<<endl;
            cout<<"Name : "<<this->name<<endl;
        }

        ~Hero()
        {
            cout<<"Destructor called"<<endl;
        }

        static int TimeCompletionPeriod()
        {
            // a static keyword fucntion could not use this keyword
            // this can be used by any object
            // it cannot use the variables decalred in a class which are not static
            // it can only sed variables which are declared static here
            cout<<timeToCComplete<<endl;
        }
};

int Hero::timeToCComplete = 100;

int main()
{

    //static allocation
    Hero h1;
    h1.health = 500;
    cout << "Health : "<< h1.health << endl;
    h1.setLevel('A');
    // h1.getLevel();
    
    //dynamically allocate size
    Hero *h2 = new Hero(30);
    h2->setLevel('B');
    cout<<"Health : "<<(*h2).health<<endl;

    Hero h3(600,'C');
    cout << "Health : "<< h3.health << endl;
    // h3.getLevel();

    Hero h4(h3);

    Hero h5;
    char name[7] = "Parth";
    h5.setHealth(700);
    h5.setLevel('P');
    h5.setName(name);
    h5.print();

    delete h2;//for dynamically allocated objects we need to manually call the destructor to delete the object

    cout<<"\n\nTime To Complete"<<endl;
    cout << Hero::timeToCComplete << endl;
    h1.timeToCComplete = 56;
    cout<<h3.timeToCComplete<<endl;


}

// whenever we create our own constructor irrespective of which type the default constructor would no longer exist

// there are two type of copies ine is shallow copy and another one is deep copy so in the shallow and in the deep copy what we do is that in shallow copy as for example the default constructor when it is called is creates a shallow copy