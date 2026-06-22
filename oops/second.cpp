#include <bits/stdc++.h>
using namespace std;

class Hero {
    private:
        char level;
    public:


        //un-parametized
        Hero() {
            cout<<"constructor is called"<<endl;
        }

        int health = 700;

        void setLevel(char l)
        {
            level = l;
        }

        void getLevel()
        {
            cout<<"Level : "<<level<<endl;
        }
};

int main()
{

    //static allocation
    Hero h1;
    h1.health = 500;
    cout << "Health : "<< h1.health << endl;
    h1.setLevel('A');
    h1.getLevel();
    
    //dynamically allocate size
    Hero *h2 = new Hero;
    h2->setLevel('B');
    h2->getLevel();
    h2->health = 400;
    cout<<"Health : "<<(*h2).health<<endl;
}