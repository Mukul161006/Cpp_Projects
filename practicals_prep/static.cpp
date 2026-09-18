#include <iostream>
using namespace std;

// Static Data Members and their functions ( which almost always boils down to getter and setter funcs inside the classes) 
// Now static data members : Simply remember; declaration inside class, define/initialize outside class, access through :: operator, 
// shares the same god damn memory, globally available < ofcourse >, its like an union of C. 
// lifecycle starts at the program beginning ends or gets destructed once the main func in done. 

class books{

    private: 
        int book_id = 0;
        static int book_count;

    public: 
        // Setter function
        books(int id){ // constructor
            book_id = id;
            book_count++;
        }

        // Display function
        static void displayTotal_Books(){
            cout << "\nTotal books as of now are : " << book_count; 
        }
};

int books::book_count = 0;

int main(){

    books::displayTotal_Books(); // accessing static funcs also using :: operator

    cout << "\nBooks being put now are 001, 002 and 003 as thier IDs.";
    books pehli(001);
    books doosri(002);
    books teesri(003);

    books::displayTotal_Books();

    return 0; 
}