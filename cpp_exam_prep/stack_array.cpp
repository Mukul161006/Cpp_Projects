#include <iostream>
using namespace std;

class Stack{

    private: 
        int arr[100]; 
        int top; 

    public: 
        // Constructor set's upto -1. 
        Stack(){
            top = -1; 
        }

        void push(int value){
            if (top >= 100){
                cout << "STACK OVERFLOW" << endl;
            } else {
                top++; 
                arr[top] = value; 
            }
        }

        void pop(){
            if (top < 0){
                cout << "STACK UNDERFLOW" << endl; 
            } else {
                cout << "\n" << arr[top] << " was processed and left the stack." << endl;
                top--; 
            }
        }

        void peek(){
            if (top < 0){
                cout << "STACK IS EMPTY" << endl;
            } else {
                cout << "The top element value is : " << arr[top] << "." << endl;
            }
        }

        void displayCurrentStack(){
            if ( top < 0){
                cout << "The stack is empty !!"; 
            } else {
                cout << "The current stack from TOP to BOTTOM IS :- \n"; 

                for(int i = top; i >= 0; i--){
                    cout << arr[i] << "\t"; 
                }
            }
        }

};

int main(){

    Stack AmmoMag; 

    for(int i = 1; i <= 100; i++){
        AmmoMag.push(i); 
    }

    AmmoMag.displayCurrentStack(); 

    AmmoMag.pop();
    AmmoMag.peek(); 

    /*
    AmmoMag.push(10); // 1st plate. 
    AmmoMag.peek(); 

    AmmoMag.push(20); // 2nd plate. 
    AmmoMag.peek(); 

    AmmoMag.pop(); // It will remove the top most element | Implying the LIFO rule. 
    // to check the last line execution ; 
    AmmoMag.peek(); // Should display 10. 
*/


    return 0; 
}