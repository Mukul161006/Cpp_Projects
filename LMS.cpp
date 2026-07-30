#include <iostream>
using namespace std;

#include "sqlite3.h"
#include <string>

struct Books {

    int book_id; 
    string name; 
    string author;

};

int createTables( sqlite3* db) {

    // Ye jo hai koi error aayi toh show kr dega. 
    char* errorMessage = 0; 

    //=================== FOR THE BOOKS TABLE ===================// 
    // Books naam ki table ka blueprint pass krne k liye SQL Command. 
    const char* sqlBooks = "CREATE TABLE IF NOT EXISTS books ("
                           "book_id INTEGER PRIMARY KEY, "
                           "name TEXT NOT NULL, "
                           "author TEXT NOT NULL);";

    // Execute krna ka command taaki vo SQL Queries actually run ho. 
    int engine_reply = sqlite3_exec(db, sqlBooks, 0, 0, &errorMessage);

    if(engine_reply != SQLITE_OK){
        cout << "SOME ISSUE HAPPENED BHAISABH " << errorMessage << endl; 
        return 1; 
    } else {
        cout << "SUCK....SEX..FULLY CREATED THE TABLE books --------------- " << endl;
    }

    //=================== NOW FOR THE STUDENTS TABLE ===================// 
    const char* sqlStudents = "CREATE TABLE IF NOT EXISTS students ("
                           "roll_no INTEGER PRIMARY KEY, "
                           "name TEXT NOT NULL, "
                           "course TEXT NOT NULL);";

    int engine_reply1 = sqlite3_exec(db, sqlStudents, 0, 0, &errorMessage);

    if(engine_reply1 != SQLITE_OK){
        cout << "SOME ISSUE HAPPENED BHAISABH " << errorMessage << endl; 
        return 1; 
    } else {
        cout << "SUCK....SEX..FULLY CREATED THE TABLE students --------------- " << endl;
    }

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

    // Calling table creation function to pass the memory address at which the table should be created re bhai. 
    createTables(db);

    sqlite3_close(db);

    return 0; 
}