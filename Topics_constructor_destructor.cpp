#include <iostream>
using namespace std;

class Soldier{
    private:
        int ammo; 

    public: 
        // DEFAULT CONSTRUCTOR 
        Soldier(){
            ammo = 50;
            cout << "<> Standard solider deployed with " << ammo << " ammos.";
        }

        // PARAMETERIZED CONSTRUCTOR ------------ ARGUMENT IS SET UP | WE USE THIS TO PROVIDE CUSTOM VALUES. 
        Soldier(int heavy_soldier_ammo_count){
            ammo = heavy_soldier_ammo_count; 
            cout << "<> Heavy solider deployed with " << ammo << " ammos.";
        }

        // COPY CONSTRUCTOR -------------- TO CLONE THE ALREADY EXISTING OBJECT | NEW MEMORY IS ALLOCATED | ADDRESS OF OBJ. IS PASSED AS REFERENCE
        Soldier(const Soldier &original_object){
            ammo = original_object.ammo; 
            cout << "<> Copy Constructor: Soldier cloned. Ammo copied: " << ammo << " ammos." << endl;
        }

        ~Soldier(){
            cout << ">< The Regiment is called back to base | Destructor called | Mission Over"; 
        }
};

int main() {

    cout << "---------- DEPLOYMENT PHASE-----------" << endl; 

    Soldier bravo; // DEFAULT CONSTRUCTOR CALLING | DECLARING THE OBJECT 
    cout << "\n";
    Soldier alpha(100); // PARAMETERIZED CONSTRUCTOR | PASSING OF THE VALUE 
    cout << "\n";
    Soldier copy_alpha(alpha); // COPY CONSTRUCTOR | PASS THE OBJECT NAME TO MAKE THE COMPILER TAKE THE ADDRESS USING & OPERATOR IN bg. 
    cout << "\n";
    // NO NEED TO CALL DESTRUCTOR COZ AS SOON AS THE EXECUTION HITS RETURN 0 IT GET'S ACTIVATED. 

    return 0;
}