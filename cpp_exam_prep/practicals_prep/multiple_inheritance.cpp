#include <iostream>
using namespace std;

// PARENT CLASS 1
class Soldier{

    protected: 
        int knife = 1; 

    public: 
        void displayStdSoldier(){
            cout << "Standard Soldier has " << knife << " knife.\n";
        }
};

// PARENT CLASS 2
class Medical_School{

    public: 
        void displayMedicalDegree(){
            cout << "The person is an Medical Graduate.\n";
        }
};

// MULTIPLE INHERITANCE EXECUTION
class Med_Soldier : public Soldier, public Medical_School{

    public: 
        void displayMedical_Soldier(){
            cout << "Our Medical Soldier has following abilites :-\n";
            displayStdSoldier();
            displayMedicalDegree();
        }
};


int main(){

    Med_Soldier ms1;
    ms1.displayMedical_Soldier();
    
    return 0; 
}