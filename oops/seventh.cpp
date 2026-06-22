#include <bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real;
        int imag;
        Complex()
        {
            cout<<"Enter Real and Imaginary Value"<<endl;;
        }

        Complex(int real,int imag)
        {
            this->real = real;
            this->imag = imag;
        }

        friend ostream& operator<<(ostream& os, const Complex& c)
        {
            os << "(" << c.real << " + " << c.imag << "i)";
            return os;
        }

        friend istream& operator>>(istream& cin,Complex &other)
        {
            cout<<"Enter the Real Part"<<endl;
            cin>>other.real;
            cout<<"Enter the Imaginary Part"<<endl;
            cin>>other.imag;
            return cin;
        }
};

int main()
{
    Complex c1, c2;
    cin>>c1 >> c2;
    cout<<"Complex Number 1:"<<c1<<endl;

}