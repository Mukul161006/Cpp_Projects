#include <iostream>
using namespace std;

// FUNCTION OVERLOADING -> Giving a same named function multiple modes to work upon | The compiler distinguishes by simply looking at the arguments passed and parameters set. 
class Weapon {

    public: 
        // F(n) Overload 1 - default function
        void fire(){
            cout << "[-] Mode 1: Firing 1 standard round!" << endl; 
        }

        // F(n) Overload 2 - parameteried function | INTEGER PARAMETER
        void fire(int rounds){
            cout << "[=] Mode 2: Firing a burst of " << rounds << " rounds!" << endl;
        }

        // F(n) Overload 3 - parameteried function | STRING PARAMETER
        void fire(string rounds){
            cout << "[*] Mode 3: Firing special " << rounds << " round!" << endl;
        }

};

// OPERATOR OVERLOADING -> Teaching arithmetical operators multiple things by providing it the custom code which we write in it's function. 
class AmmoBox{

    private: 
        int rounds; 

    public: 
        // Let's setup an parameterized constructor to default the values into the rounds automatically. 
        AmmoBox(int r = 0){
            rounds = r;
        }

        // OPERATOR OVERLOADING FUNCTION | HEre it is in such a form that the objects can return from this function < and that is why no need of the return type > 
        AmmoBox operator+(const AmmoBox &otherBox){
            AmmoBox combinedBox; // The object that will be returned from the f(n)

            combinedBox.rounds = this->rounds + otherBox.rounds; 

            return combinedBox; 
        }

        void display() {
            cout << "Rounds available: " << rounds << endl;
        }
};

int main(){

    // FUNCTION OVERLOADING COMMANDS
    Weapon my_rifle; 

    my_rifle.fire(); 
    cout << "\n";

    my_rifle.fire(191); 
    cout << "\n";

    my_rifle.fire("AAGGGGG_HELLL"); 
    cout << "\n";

    // OPERATOR OVERLOADING COMMANDS
    AmmoBox Box_Ben(20);
    AmmoBox Box_Ned(70);

    AmmoBox totalAmmo_Ben_Ned = Box_Ben + Box_Ned; 

    cout << "Box Ben: ";
    Box_Ben.display();
    
    cout << "Box Ned: ";
    Box_Ned.display();
    
    cout << "Total Combined Ammo: ";
    totalAmmo_Ben_Ned.display();

    return 0; 
}