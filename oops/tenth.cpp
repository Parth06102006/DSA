#include <bits/stdc++.h>
using namespace std;

class Book {
    private: //Private access specifier it cannot be access to the classes , functions and objects outside the class if no getter and setter hence these are encapuslated and dont allow these to be visible to the other functions and classes and the objects 
        int bookId;
        string title;
        string author;
        float price;
        static int totalBooks; //It would keep a track of all the books in here and to change it I would need a static function
    public:
        Book(){ 
            cout << "Book Class Defualt Constructor Called"<<endl;
        } //Default Constructor here I have provided the constructor otherwise it is invoked manually

        Book(int bookId , string title , string author , float price ) : bookId(bookId) , title(title) , author(author) , price(price) {}
        // Parametized Constructor here there is the constructor overloading where the arguments has been provided over here and there is the argument provided and as per the argument the values are set in the data members of the class
        Book(Book &book)
        {
            this->bookId = book.bookId;
            this->title = book.title;
            this->author = book.author;
            this->price = book.price;
        }
        //This is the copy constructor here the constructor takes the class object as a parametrs and creates a deep copy so that the two different objects of the same class can be created but of the same values and also one more thing that it prevents the shallow copy and hence it does not point to the same memory location
        virtual ~Book()
        {
            cout << this->title << "with the "<< this->bookId << "has been removed" <<endl;
        }

        // This is the destructor which removes the allocateed memory and frees up space and is automatically invoked when the program ends and frees up the memory or using the memory allocater the object is when removed and it's memory is freed then the particualr instance of the object is also removed and the destructor is also called and like default constructor it is also automatically invoked during compile time untill explicitly coded

        //Here virtual function is the keyword used so that the the dervied class function can be overridden and it dose safe destruction and is removed successfully and bith the derived and the abse class destrucotr is called safely and removed 

        void setTitle(string t) //setter it is the example of abstractuon where without getting into the complex info I can set the value
        {
            (*this).title = title;
        }

        string getTitle()
        {
            return this->title;
        }

        int getID()
        {
            return this->bookId;
        }
        // it is a getter which allows the object to access the private member of the class and hence can return the desired output to the object

        virtual void displayInfo()
        {
            cout << "Book Id : " << this->bookId <<endl;
            cout << "Title : " << this->title <<endl;
            cout << "Author : " << this->author <<endl;
            cout << "Price : " << this->price <<endl;
        }
        // it is the function where the information can be displayed and is virtual since each class (base,derived) so the virtual keyword is used so that the function is overidden and the derived class function is displayed in it

        bool operator == (const Book &b)
        {
            if (this->bookId == b.bookId) return true;
            return false;
        }

        explicit operator string() const{
            return "Rs. " + to_string(this->price); 
        }

        static void showTotalBooks()
        {
            cout << "Total Books : " << totalBooks << endl;
        }

        friend void showBookDetails(Book &b);
        // the friend keyword is used for the classes and the functions and it allows the reference to the given class private , protected and public members and hence can be changed and shown by the friend funcnction (global / other class memebr function whose function is declared in the class and the function defination the can be implemented later on and can be written as friend using the scope resolution operator of the given function) or I can use it for class
};

void showBookDetails(Book &b) // referance operator is passed over here and hence here the & operator is used and this is the Call by Reference of the function here 

{
    cout << "Book Id : " << b.bookId <<endl;
    cout << "Title : " << b.title <<endl;
    cout << "Author : " << b.author <<endl;
    cout << "Price : " << b.price <<endl;
}

class EBook : private Book {
    //By default the members are private here
    string format;
    string downloadLink;
    public : 
        EBook()
        {
            cout << "Default Constructor of the dervied class E Book is called" << endl;
        }

        EBook(int id,string t,string a,float p,string f,string link) : Book(id,t,a,p)
        {
            format = f;
            downloadLink = link;
        } // Parametized Constructor

        EBook (EBook &e) : Book(e)
        {
            this->format = e.format;
            this->downloadLink = e.downloadLink; 
        } //Copy Constructor

        void displayInfo() override { // here override is explciit addition not here otherwise also as it jsut ensures that the virtual function when called does not result in the virtual function to be called but the override ensures that the type and the other things of the virtual function of the base class is same and if not then error is thrown otherwise just a warning at most
            Book::displayInfo(); // since there are two methods with the same name in both of the classes
            cout << "Format : "<<this->format<<endl;
            cout<<"Download Link : "<<this->downloadLink<<endl;
        }
};

class Member {
    protected :
        int memberId;
        string name;
        vector<int> borrowedBooks;

    private:
        static int totalMembers;
    
    public :
        
        Member()
        {
            cout<<"Default Constructor for the Class Member is called"<<endl;
        }

        Member(int memberId,string name) : memberId(memberId),name(name) {}

        ~Member()
        {
            cout << "Member : " << this->name << " Deleted "<<endl;
        }

        void borrowBook (int bookId)
        {
            borrowedBooks.push_back(bookId);
            cout<<"Book Borrowed" << endl;
        }

        void returnBook(int bookId)
        {
            borrowedBooks.erase(remove(borrowedBooks.begin(),borrowedBooks.end(),bookId),borrowedBooks.end());
            cout << "Returned Book" << endl;
        }

        void displayBorrowedBooks()
        {
            cout << "Borrowed Books : \n";
            for(auto it=borrowedBooks.begin();it!=borrowedBooks.end();it++)
            {
                cout << (*it) << "\t" ;
            }
        }

        static void showTotalMembers()
        {
            cout << "Total Members : "<<totalMembers << endl;
        }
};

class Privileges {
    protected : 
        bool canAddBooks;
        bool canRemoveBooks;
        bool canViewMembers;
    
    public:
        Privileges()
        {
            cout<<"Default Constructor Privileges is called";
        }

        void grantAll()
        {
            canAddBooks = true;
            canRemoveBooks = true;
            canViewMembers = true;
        }

        bool hasFullAccess()
        {
            return (canAddBooks && canRemoveBooks && canViewMembers);
        }
};

class Library {
    private:
        vector <Book*> books;
        vector <Member*> members;
    public:
        Library()
        {
            cout << "Default Constructor Library is called"<<endl;
        }

        ~Library(){
            cout << "Deleted Library"<<endl;
        }

        void addBook(Book* b)
        {
            books.emplace_back(b);
            cout << "Book Added : "<<b->getTitle()<<endl;
        }

        void removeBook (int id)
        {
            try
            {
                for(auto it=books.begin();it!=books.end();it++)
                {
                    if((*it)->getID() == id)
                    {
                        delete *it; // as new memory would have been allocated here to assign the book in the array of the books
                        books.erase(it);
                        cout << "Book Id " << id << " removed"<<endl;
                        return;
                    }
                }
                throw runtime_error("Book not Found");
            }
            catch(runtime_error &error)
            {
                cout << error.what() << endl;
            }
            
        }

        void showAllBooks() const{
            cout << "\n All Books in Library : \n";
            for(auto b:books)
            {
                b->displayInfo();
            }
        }

        template<typename T> void searchBook(T key);{

        }

        void saveToFile();

        void loadFromFile();

        void registerMember(Member* m);
};

class Admin : public Member , public Privileges {
    private:
        string adminCode;
    
    public :
        Admin()
        {
            cout << "Default Constructor for the class Admin has been called"<<endl;
        }

        Admin(int id,string n,string code) : Member(id,n) {
            adminCode = code;
        }

        void addBookToLibrary(Library &lib,const Book &b)
        {
            if (Privileges::hasFullAccess())
            {
                lib.addBook
            }
        }
}