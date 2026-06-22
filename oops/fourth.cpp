#include<bits/stdc++.h>
using namespace std;

class Subtraction{
    private:
        int x;
    public:
        Subtraction (int x)
        {
            this->x = x;
        }

        Subtraction operator^(Subtraction &s)
        {
            int result;
            if (this->x > s.x)
            {
                result = this->x - s.x;
            }
            else
            {
               result =  s.x - this->x;
            }
            return result;
        }

        void print()
        {
            cout<<x<<endl;
        }
};

int main()
{
    Subtraction s1(5);
    Subtraction s2(4);
    Subtraction result = s1^s2;
    result.print();
}