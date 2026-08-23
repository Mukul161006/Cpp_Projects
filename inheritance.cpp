// INHERITANCE :-
/*  
    - it's all about building a chain of command and reusability of the eariler built class. 
    - The derived / child class gets all the features of the existing class i.e. parent / base class. 
    - without rewriting the code back again. 
    - Child ~ Parent relationship. 

    <> Syntax: class ChildName : access_modifier ParentName
    <> Use "protected" access modifier to inherit the values from the parent to child. 

    THE 5 TYPES OF INHERITANCES 
    1. Single Inheritance : One child ~ one parent. Soldier ~ Medic Soldier only. 
    2. Multilevel Inheritance : This one is all about the chain of command. Grandparent -> Parent -> Child. The successor gets what all the above one has got. 
    3. Multiple Inheritance : One Child ~ Two Parents. Soldier + Medical Dept ~ Soldier Doctor
    -- 4. Hierarchial Inheritance : Multiple Child ~ One parent. Soldier ~ Brigadier | Sniper | Rifleman | Medic
    -- 5. Hybrid Inheritance : The messy part where it is a combination of more than one type of inheritances (usually Hierarchical + Multiple).
*/

#include <iostream>
using namespace std;

// SINGLE & MULTILEVEL INHERITANCE 
    // Parent class 1
class Soldier{

    protected: // the special type of access modifier that allows only the class and it's child classes touch these values | VIP FAMILY PASS. 
        char knifeType[10] = "Kukri";

    public: 
        void displayStdSoldier(){
            cout << "Soldier (can) : SLEEP | EAT | MARCH | KNIFE " << endl; 
            cout << "Knife type : " << knifeType << endl; 
        }
}; 

    // Child class 1 
class Sniper : public Soldier{

    private: 
        int sniperAmmo = 200;

    public: 
        void displaySniperSoldier(){
            cout << "Sniper Soldier has " << sniperAmmo << " ammos and is specialzed in using SNIPER and this knife - " << knifeType <<"!" << endl;
            cout << "Has capibilites of Standard Soldier too\n \t"; 
            displayStdSoldier();
        }
};

// MULTIPLE INHERITANCE
    // Parent class 2
class MedicalSchool{
    public:
        void medicalDegree() {
            cout << "[+] Soldier holds a certified medical degree." << endl;
        }
}; 

    // Multiple Inheritance Child
class CombatMedic : public Soldier, public MedicalSchool{
    public: 
        void combatDoctor(){
            cout << "Our specialised army doctor is here, deployed on the battlefield." << endl; 
            medicalDegree(); 
            displayStdSoldier();
        }

};

int main(){

    Soldier Sepoy; 
        Sepoy.displayStdSoldier(); 
    
    Sniper Sniper1; 
        Sniper1.displaySniperSoldier();

    CombatMedic doc1; 
        doc1.combatDoctor();

    return 0; 
}

