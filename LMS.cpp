#include <iostream>
#include <string>
#include <sqlite3.h>

using namespace std;

struct Books{
    string Title;
    string Author;
};
int main(){
    Books library[50] = {
        {"The Alchemist", "Paulo Coelho"},
        {"Harry Potter and the Philosopher's Stone", "J.K. Rowling"},
        {"The Hobbit", "J.R.R. Tolkien"},
        {"1984", "George Orwell"},
        {"Animal Farm", "George Orwell"},
        {"Pride and Prejudice", "Jane Austen"},
        {"To Kill a Mockingbird", "Harper Lee"},
        {"The Great Gatsby", "F. Scott Fitzgerald"},
        {"Moby Dick", "Herman Melville"},
        {"War and Peace", "Leo Tolstoy"},
        {"Crime and Punishment", "Fyodor Dostoevsky"},
        {"The Catcher in the Rye", "J.D. Salinger"},
        {"Brave New World", "Aldous Huxley"},
        {"The Lord of the Rings", "J.R.R. Tolkien"},
        {"The Kite Runner", "Khaled Hosseini"},
        {"A Thousand Splendid Suns", "Khaled Hosseini"},
        {"The Da Vinci Code", "Dan Brown"},
        {"Angels and Demons", "Dan Brown"},
        {"Inferno", "Dan Brown"},
        {"The Lost Symbol", "Dan Brown"},
        {"The Shining", "Stephen King"},
        {"It", "Stephen King"},
        {"Misery", "Stephen King"},
        {"The Green Mile", "Stephen King"},
        {"The Hunger Games", "Suzanne Collins"},
        {"Catching Fire", "Suzanne Collins"},
        {"Mockingjay", "Suzanne Collins"},
        {"Twilight", "Stephenie Meyer"},
        {"New Moon", "Stephenie Meyer"},
        {"Eclipse", "Stephenie Meyer"},
        {"Breaking Dawn", "Stephenie Meyer"},
        {"The Book Thief", "Markus Zusak"},
        {"The Fault in Our Stars", "John Green"},
        {"Looking for Alaska", "John Green"},
        {"Paper Towns", "John Green"},
        {"The Chronicles of Narnia", "C.S. Lewis"},
        {"Dracula", "Bram Stoker"},
        {"Frankenstein", "Mary Shelley"},
        {"Jane Eyre", "Charlotte Bronte"},
        {"Wuthering Heights", "Emily Bronte"},
        {"The Odyssey", "Homer"},
        {"The Iliad", "Homer"},
        {"Don Quixote", "Miguel de Cervantes"},
        {"The Picture of Dorian Gray", "Oscar Wilde"},
        {"The Adventures of Sherlock Holmes", "Arthur Conan Doyle"},
        {"The Hound of the Baskervilles", "Arthur Conan Doyle"},
        {"The Three Musketeers", "Alexandre Dumas"},
        {"Les Miserables", "Victor Hugo"},
        {"The Count of Monte Cristo", "Alexandre Dumas"},
        {"The Little Prince", "Antoine de Saint-Exupery"}
    };
    return 0;
}   