#include <iostream>
using namespace std;

// PARENT CLASS
class human{

    public: 
        void display_human(){
            cout << "Human sleeps, fucks, eats and survives.\n";
        }
};

// 1st CHILD CLASS
class dadaji : public human{

    public: 
        void display_dadaji(){
            cout << "Dadaji aka Superior Human commands papa and me like all of us !! and has anger issues.\n";
            cout << "And is a human too as following;\n";
            display_human();
        }

        void display_trait(){
            cout << "Dadaji's traits are anger, commanding.\n";
        }
};

// 2nd CHILD CLASS
class pitaji : public dadaji{

    public: 
        void display_pitaji(){
            cout << "Pitaji aka Inferior Human commands me !!\n";
            cout << "But he has Dadaji's traits as follows;\n";
            display_trait();
            cout << "And is a human too as following;\n";
            display_human();
        }
};

int main(){

    dadaji d1; 
    d1.display_dadaji(); 

    pitaji p1;
    p1.display_pitaji();

    return 0;
}