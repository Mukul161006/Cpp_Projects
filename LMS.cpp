#include <iostream>
using namespace std;

#include "sqlite3.h"
#include <string>

struct Books {

    string book_id; 
    string name; 
    string author;
};

struct Students {
    
    string roll_no; 
    string name; 
    string course;
};


int createTables( sqlite3* db) {

    // Ye jo hai koi error aayi toh show kr dega. 
    char* errorMessage = 0; 

    //=================== FOR THE BOOKS TABLE ===================// 
    // Books naam ki table ka blueprint pass krne k liye SQL Command. 
    const char* sqlBooks = "CREATE TABLE IF NOT EXISTS books ("
                           "book_id TEXT PRIMARY KEY, "
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
                           "roll_no TEXT PRIMARY KEY, "
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


// Function for taking vlaues from the user about the Book. 
int addBook (sqlite3* db, Books newBook){

    char* errorMessage = 0; 

    string sqlInsertBook = "INSERT INTO books (book_id, name, author) VALUES ('" + newBook.book_id + "', '" + newBook.name + "', '" + newBook.author + "');";

    int status = sqlite3_exec(db, sqlInsertBook.c_str(), 0, 0, &errorMessage);

    if ( status != SQLITE_OK){
        cout << "$$$$$$$ SOMETHING IS WRONG $$$$$$$ : " << errorMessage << endl;
        return 1; 
    } else {
        cout << "THE DATA GOT ADDED SIRRRRRRR !!" << endl;
    }
}


// Function for taking vlaues from the user about the student. 
int addStudent (sqlite3* db, Students newStud){

    char* errorMessage = 0; 

    string sqlInsertStud = "INSERT INTO students (roll_no, name, course) VALUES ('" + newStud.roll_no + "', '" + newStud.name + "', '" + newStud.course + "');";

    int status = sqlite3_exec(db, sqlInsertStud.c_str(), 0, 0, &errorMessage);

    if ( status != SQLITE_OK){
        cout << "$$$$$$$ SOMETHING IS WRONG $$$$$$$ : " << errorMessage << endl;
        return 1; 
    } else {
        cout << "THE DATA GOT ADDED SIRRRRRRR !!" << endl;
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

    Books userBook; 
    cout << "\n---- ADD A NEW BOOK ----" << endl;
    cout << "Enter your BOOK ID \t"; 
    getline(cin >> ws, userBook.book_id);
    cout << "Enter BOOK NAME\t";
    getline(cin >> ws, userBook.name);
    cout << "Enter AUTHOR'S NAME\t";
    getline(cin >> ws, userBook.author);
    addBook(db, userBook);

    Students userStud; 
    cout << "\n---- ADD A NEW STUDENT ----" << endl;
    cout << "Enter Student's Roll Number \t"; 
    getline(cin >> ws, userStud.roll_no);
    cout << "Enter STUDENT NAME\t";
    getline(cin >> ws, userStud.name);
    cout << "Enter STUDENT'S COURSE\t";
    getline(cin >> ws, userStud.course);
    addStudent(db, userStud);

    sqlite3_close(db);

    return 0; 
}