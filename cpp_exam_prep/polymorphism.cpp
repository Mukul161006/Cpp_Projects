/*
    POLYMORPHISM - many forms
        -> It is a very powerful feature of cpp to allow the functions, operators and even commands to behave in multiple ways. 

        Compile-Time Polymorphism (Early Binding): The compiler knows exactly which function to call before 
        the program even runs. Example: Function Overloading and Operator Overloading.

        Run-Time Polymorphism (Late Binding): The compiler doesn't know which function to call until the 
        exact moment the program is actually running. We achieve this using Virtual Functions and pointers.

*/

#include <iostream>
using namespace std;

//                              RUN TIME POLYMORPHISM  |  achieved on attack function. 
// THE BASE CLASS
class Soldier {
    public:
        // The 'virtual' keyword is the magic here. 
        // It means "Look for a better version of this in the child class first."
        virtual void attack() {
            cout << "[-] Standard Soldier attacks with a basic rifle." << endl;
        }
};

// DERIVED CLASS 1
class Sniper : public Soldier {
    public:
        // Overriding the base command
        void attack() {
            cout << "[*] Sniper fires a suppressed high-caliber round." << endl;
        }
};

// DERIVED CLASS 2
class Grenadier : public Soldier {
    public:
        // Overriding the base command
        void attack() {
            cout << "[+] Grenadier launches an explosive shell." << endl;
        }
};

int main(){

    // Generic pointer to the Base Commander to achieve polymorphism. 
    Soldier* base_Commander; 

    // Creating objects to which the pointer will point to. 
    Sniper s1; 
    Grenadier g1; 

    // Command 1 : Pointing to the Sniper object. 
    base_Commander = &s1; 
    base_Commander->attack();

    // Command 2 : Pointing to the Grenadier object.
    base_Commander = &g1;
    base_Commander->attack();

    return 0; 
}
