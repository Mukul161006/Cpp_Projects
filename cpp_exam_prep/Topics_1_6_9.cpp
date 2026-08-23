#include <iostream>
using namespace std;

class Soldier {
    private : 
        int mission_count = 0; 
        char name[10];
    
    public : 
        
        // Acting like Getter Function
        void set_data (){
            cout << "Number of missions done ?? ";
                cin >> mission_count;
            cout << "Name ?? ";
                cin >> name;
            cout << "Family or not - in terms of 0 and 1 ?? ";
                cin >> family; 
                
        }
        
        // Acting like Setter Function
        void display(){
            cout << "Missions Done : " << mission_count << endl; 
            cout << "Soldier Name : " << name << endl; 
        }
    
        // Just declare that it exists inside the class rest of the task can be done in the global space. 
        void Scope_resolution_operator_Display(); 
        
    protected : 
        bool family = 0;
};

void Soldier::Scope_resolution_operator_Display(){
    
    cout << "DISPLAYING SAME INFORMATION USING THE :: OPERATOR " << endl; 
    cout << "Total Missions done : " << mission_count << endl; 
    cout << "Full Name : " << name << endl; 
    cout << "Has family or not ? < 1 = true and 0 = false > " << family; 
    
};

int main() {
	
	Soldier buddy_alpha; 
	
	cout << "Enter soldier data" << endl; 
	buddy_alpha.set_data(); 
	cout << "Soldier data display" << endl; 
	buddy_alpha.display();
	cout << "Soldier data from outside the class " << endl; 
	buddy_alpha.Scope_resolution_operator_Display();
	
    return 0; 
}
