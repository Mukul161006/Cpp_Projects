#include <iostream>
using namespace std;

// HIERARCHICAL INHERITANCE =>  ONE PARENT -> MULTIPLE CHILDS

// PARENT CLASS 
class Soldier{

    public: 
        void show_Soldier(){
            cout << "A Soldier with AK-47 !!\n";
        }

};

// CHILD CLASS 1
class Boss : public Soldier{

    public: 
        void show_Boss(){
            cout << "A boss has a RPG and he is like \n";
            show_Soldier();
        }
};

// CHILD CLASS 2
class Brigadier : public Soldier{

    public: 
        void show_Brigadier(){
            cout << "He is the COMMANDER along with \n";
            show_Soldier();
        }
};

// CHILD CLASS 3
class Comms : public Soldier{

    public: 
        void show_Comms(){
            cout << "Comms specialize in Communications along with \n";
            show_Soldier();
        }
};

int main(){

    Soldier s1;
    s1.show_Soldier();
    cout << "\n";

    Brigadier b1;
    b1.show_Brigadier();
    cout << "\n";

    Comms c1;
    c1.show_Comms();
    cout << "\n";

    return 0; 
}