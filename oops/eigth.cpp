#include <bits/stdc++.h>
using namespace std;

class Word {
    public:
        string name;
        Word(string name)
        {
            this->name=name;
        }
        friend void operator==(Word,Word);
};


void operator==(Word w1,Word w2)
{
    if(w1.name == w2.name)
    {
        cout << "Equal Strings"<< endl;
    }
    else
    {
        cout<<"Not Equal Strings"<<endl;
    }
}

int main()
{
    Word w1("Parth");
    Word w2("Parth");
    w1 == w2;
}

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i) :
    real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real,
        imag + obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;  
    cout << c3.real << " + i" << c3.imag;
    return 0;
}