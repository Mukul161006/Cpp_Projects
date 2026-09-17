#include <iostream>
using namespace std;

class room{

    private: 
        int computers;

    public: 
        // DEFAULT CONSTRUCTOR
        room(){
            computers = 10; 
            cout << "\nNumber of Standard computers are : " << computers; 
        }

        // PARAMETERIZED CONSTRUCTOR
        room(int heavy_end_computers){
            computers = heavy_end_computers;
            cout << "\nNumber of Heavy Duty Computers are : " << computers;
        }

        // COPY CONSTRUCTOR
        room(const room &mainSource){
            computers = mainSource.computers;
            cout << "\nCOPY >>> Number of Heavy Duty Computers are : " << computers;
        }

        // DESTRUCTOR => You don't need to call it as soon as the main func finishes it gets executed automatically. || and it's contents will appear as many times as the number of objects are deleted by it.
        ~room(){
            cout << "\n\nIf this message has come then every instance or object has been wiped out by compiler. \nIt was great working with you.\tThanks, Bye.";
        }
};

int main(){

    room r1_default;
    cout << "\n";
    room r2_parameterized(5);
    cout << "\n";
    room r3_copy(r2_parameterized);

    return 0; 
}