#include <iostream>
#include<fstream>

using namespace std;

/* class Complex{
    public:
        float x;
        float y;
        Complex(float x=0,float y=0):x(x),y(y){}

        friend Complex operator*(Complex &,Complex &);
};

Complex operator* (Complex &c1,Complex &c2){
    return Complex(c1.x+c2.x,c1.y+c2.y);
}

int main()
{
    Complex c1(4,5);
    Complex c2(5.4,23.5);
    Complex c3 = c1*c2;
    cout << c3.x << " "<<c3.y<<"i"<<endl;
} */
/* 
int main()
{
    int lines_number = 0;
    //Write into the file
    string name;
    getline(cin,name);
    ofstream outfile("./data.txt");
    outfile << name ;
    outfile.close();

    //Open the file
    string line;
    ifstream infile("./data.txt");
    try
    {
        if (!infile.is_open())
        {
            throw runtime_error("File not present");
        }
    while(infile.eof())
    {   
        getline(infile,line);
        cout<<line<<endl;
        lines_number++;
        
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
} */

/* class Employee{
    public:
        string name;
        string desg;
        string ecode;
        double salary;

        void write()
        {
            cout<<"Enter Name"<<endl;
            getline(cin,this->name);
            cout<<"Enter Desg"<<endl;
            getline(cin,this->desg);
            cout<<"Enter Ecode"<<endl;
            getline(cin,this->ecode);
            cout<<"Enter Salary"<<endl;
            cin>>this->salary;
            cin.ignore()
        }

        void read()
        {
            cout<<this->name<<endl;
            cout<<this->desg<<endl;
            cout<<this->ecode<<endl;
            cout<<this->salary<<endl;
        }
};

int main() */
/* {
    Employee e[10];
    for (int i=0;i<10;i++)
    {
        e[i].write();
    }

    for(int j=0;j<10;j++)
    {
        e[j].read();
    }
} */

/* class XYZ {
    int a,b;
    static int count;
    public:
        XYZ(int a=0,int b=0):a(a),b(b){
            count++;
        };
        static void getCount()
        {
            cout<<"Number of Obejcts Created : "<<count<<endl;
        }
};

int XYZ::count = 0;

int main()
{
    XYZ a;
    XYZ b(12,45);
    XYZ::getCount();
}
 */

/* class Student
{
    static int count;
    protected:
        string name;
        int roll;
        int age;
        int class_;
        char section;
    public:
        Student(string name,int roll,int age,int class_,char section):name(name),roll(roll),age(age),class_(class_),section(section){
            cout<<"Student : "<<count<<"Created";
            count++;
        }

        virtual ~Student() = 0;
};
Student::~Student()
{
    cout<<"Student : "<<Student::count<<" Deleted"<<endl;
    Student::count --;
}


class Exam:public Student
{
    protected:
        int A;
        int B;
        int C;
        int D;
        int E;
    public:
        Exam(Student &s,int A,int B,int C,int D,int E):Student(s),A(A),B(B),C(C),D(D),E(E):{
            cout<<"Results Entered"<<endl;
        }

        void showResults()
        {
            cout<<"Sub A : "<<A<<endl;
            cout<<"Sub B : "<<B<<endl;
            cout<<"Sub C : "<<C<<endl;
            cout<<"Sub D : "<<D<<endl;
            cout<<"Sub E : "<<E<<endl;
        }

        ~Exam()
        {
            cout<<"Destoyed Exams"<<endl;
        }
};

class Result:public Exam{
    void showResult()
    {
        cout << name<<endl;
        cout<<roll<<endl;
        cout<<class_<<endl;
        cout<<section<<endl;
        double results = (double)(((A+B+C+D+E)/5))*100;
        cout<<results<<endl;
    }
};
 */

/* int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
} */

/* class Integer{
    public:
        int x;
        Integer(int x):x(x){};
        Integer(Integer &i){this->x=i.x;}
        Integer operator --()
        {
            Integer i((this->x)--);
            return  i;
        }
        Integer operator --(int i)
        {
            Integer old(i);
            this->x --;
            return  old;
        }
}; */
/* 
int main()
{
    string line;
    ifstream infile("data.txt");
    if (infile.is_open)
    {
        while(infile.eof())
        {
            getline(infile,line);
            cout<<line<<endl;
        }
    }
} */

/* string append(string words[])
{
    string new_string = "";
    for(int i=0;i<5;i++)
    {
        new_string += words[i];
    }
    return new_string;
}
B
int main()
{
    string words[5] = {"Guru","Gobind","Singh","Indraprastha","University"};
    cout<<append(words)<<endl;

} */

/* class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(int hours,int minutes,int seconds){
            this->hours=hours;
            this->minutes=minutes;
            this->seconds=seconds;
        }

        void show_time()
        {
            cout<<"Hours"<<hours<<endl;
            cout<<"Minutes"<<minutes<<endl;
            cout<<"Seconds"<<seconds<<endl;
        }

        ~Time()
        {
            cout<<"Time Deleted"<<endl;
        }
}
 */

float area(float h,float b)
{
    return h*b;
}
float area(float r) 
{
    return 3.14*r*r;
}
float area(float s)
{
    return s*s;
}