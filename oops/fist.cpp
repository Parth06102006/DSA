#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int health;
};

int main()
{
    Hero h1;//object of type Hero
    cout<<sizeof(h1.health)<<endl;
}

// using . operator i can access the data member of the defined object of a class here 
// but the members i fnot given access modifier public the error would be thrown as default is private so we haver to define the scope using the access modifier 
// if i do any data member public i could access it anywhere below the indentatioon of the public keywork so the defined variables in public could be accessed anywhere in the code the private data members could be accessed only in class no where else 
// i could set the values of the object using . operator 
// to access the privater data member outside fo class we use getters and setters this allows us to access the values which are private using the methods (otherwise called functions)

////// padding and greedy alignment what is it ??