#include <iostream>
using namespace std;

#include "sqlite3.h"
#include <string>

struct Books {

    int book_id; 
    string name; 
    string author;

};

void createTables( sqlite3* db) {

    // Ye jo hai koi error aayi toh show kr dega. 
    char* errorMessage = 0; 

    const char* sqlBooks = "CREATE TABLE IF NOT EXISTS books ("
                           "book_id INTEGER PRIMARY KEY, "
                           "name TEXT NOT NULL, "
                           "author TEXT NOT NULL);";

}

int main (){

    sqlite3* db; 

    int file_open = sqlite3_open("lib_data.db", &db);

    if( file_open ) {
        cout << "There is some issue bhai !!" << endl;
        return 1; 
    } else {
        cout << "File hai re baba aur open bhi ho rhi hai" << endl;
    }

    sqlite3_close(db);

    return 0; 
}