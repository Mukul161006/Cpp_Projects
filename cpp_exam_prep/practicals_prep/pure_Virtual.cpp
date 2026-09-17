#include <iostream>
using namespace std;

class books{

    public: 
        virtual void show() = 0;
        // PURE VIRTUAL FUNCTION should be strictly defined in it's child classes but not on in the generic / abstract class.
};

class magic_books : public books{

    public: 
        void show(){
            cout << "I am a Magical book.\n";
        }
};

int main(){

    magic_books mb1; 
    mb1.show();


    return 0; 
}