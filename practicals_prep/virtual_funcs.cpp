#include <iostream>
using namespace std;

class books{

    public: 
        virtual void show(){
            cout << "A book is a book new or old\n";
        }
};


class old_books : public books{

    public: 
        virtual void show(){
            cout << "OLD age books are gold !!\n";
        }
};

class new_books : public old_books{

    public: 
        virtual void show(){
            cout << "NEW age books are Silver !!\n";
        }
};

int main(){

    books* librarian; // Main pointer to shift the virtual keywords sight to bring out the right data. 

    // 23 objects created to play around with.
    books b1;
    old_books ob1;
    new_books nb1; 

    // Now the main pointer shifting game.
    librarian = &b1; 
    librarian->show();

    librarian = &ob1; 
    librarian->show();

    librarian = &nb1; 
    librarian->show();

    return 0;
}