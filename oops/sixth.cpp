#include <iostream>
using namespace std;
class Singleton {
private:
Singleton() {
cout << "Object created" << endl;
}

public:
static Singleton& getInstance() {
static Singleton instance;
return instance;
}

void doSomething() {
cout << "Doing something..." << endl;
}
};

int main() {
// Create the first object
Singleton& obj1 = Singleton::getInstance();
obj1.doSomething();

// Attempt to create a second object (this should terminate the program)
// Uncommenting the next line would result in a compilation error.
// Singleton& obj2 = Singleton::getInstance();

return 0;
}