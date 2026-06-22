#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
        string name;
        int age;
        static int total;
        Student(string name,int age) : name(name),age(age){total+=1;}

        void static display()
        {
            cout<<"Total : "<<total<<endl;
        }

        Student operator+()
        {
            age+=1;
        }
};

inline int add(int a,int b)
{
    return a+b;
}

int Student::total = 0;

int main()
{
    int arraySize = 3;
    Student* students[arraySize];
    students[0] = new Student("Parth",20);
    students[1] = new Student("S",30);
    students[2] = new Student("R",56);

    + (*students[2]);

    for(int i=0;i<arraySize;i++)
    {
        cout<<students[i]->name<<" is of age "<<students[i]->age<<endl;
        (*students[i]).display();
    }



    for(int i=0;i<arraySize;i++)
    {
        delete students[i];
    }

    cout << add(3,4) << endl;
}