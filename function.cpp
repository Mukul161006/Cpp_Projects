#include <iostream>
using namespace std;

class Soldier{

    private: 
        int health; 

    public: 
        Soldier(int h){
            health = h; 
        }

        void displayHealth(){
            cout << "\nHEALTH STATUS: " << health << endl; 
        }

        // 1. Friend Function Declaration
        // 2. Uses Const Argument (const)
        // 3. Uses Call by Reference (&)
        // 4. Returns an Object of type 'Soldier'
        friend Soldier applyMedkit(const Soldier &injuredSoldier);
};

// BUILDING OF AN OBJECT FUNCTION TO RETURN OBJECTS FROM THE FUNCTION WHEN CALLED | HERE Soldier isn't acting as any class for it would need :: Operator instead it has become an Object. 
Soldier applyMedkit(const Soldier &injuredSoldier){

    int new_health = injuredSoldier.health + 50; 
    
    // Creating a brand new object to return
    Soldier healed_soldier(new_health); 
    cout << "\n[+] Medkit applied by field medic." << endl;
    
    return healed_soldier; // Returning the object!
}

int main(){

    Soldier Ben(20); 

    cout << "\nBEFORE Medic" << endl; 
    Ben.displayHealth(); 

    Soldier recover_Ben = applyMedkit(Ben);

    cout << "\nAFTER Medic" << endl;
    recover_Ben.displayHealth();

    return 0;
}