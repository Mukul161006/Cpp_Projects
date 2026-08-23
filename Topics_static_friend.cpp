#include <iostream>
using namespace std;

class Regiment{

    private: 
        int soldier_id = 0;
        char enemyName[30] = "Pakistan"; 
        static int troop_count; // STATIC MEMBER DATA TYPE

    public: 
        Regiment(int id){
            soldier_id = id; 
            troop_count++; 
        }

        // STATIC MEMBER FUNCTION
        static void displayTotalTroops(){
            cout << "\nTOTAL TROOPS ON THE BATTLEFIELD ARE : " << troop_count << "\n" << endl; 
        }

        // FRIEND FUNCTION | DECLARE THE OBJECT ALSO WHILE DECALRING FRIEND FUNCTION | keyword return_type funcName(ObjName);
        friend void secretInspector(Regiment Sec_Inspect);
};

// STATIC DATA MEMBERS ARE MANDATORLY DEFINED IN THE GLOBAL SCOPE AND DECLARED INTO THE CLASSES. 
int Regiment::troop_count = 0;

// PLAYING WITH THE FRIEND FUNCTION | NO NEED OF . OR :: OPERATORS - as friend function is never a member of the class 
// INTERNALLY IT USES "THIS OPERATOR" TO POINT TO OBJECTS AND CLASSES. 
void secretInspector(Regiment Sec_Inspect){
    // accessing the privately held data. 
    cout << "\n[!] CONFIRMING THAT OUR ENEMY NAME IS " << Sec_Inspect.enemyName << "\n[!] START DEPLOYING TROOPS SERGEANT." << endl; 
}

int main(){

    Regiment::displayTotalTroops();

    Regiment DummyR(9966);
    secretInspector(DummyR);

    cout << "Deploying troops -->\t 101\t 102\t 103\nwin soldiers !!!" << endl; 
    Regiment alpha(101);
    Regiment bravo(102);
    Regiment beta(103);

    Regiment::displayTotalTroops();

    return 0;
}