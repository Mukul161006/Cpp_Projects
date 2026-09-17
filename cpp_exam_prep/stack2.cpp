#include <iostream>
using namespace std;

// LIFO 
class Stack{
    private: 
        int arr[100]; 
        int top; 

    public: 
        Stack(){
            top = -1;
        }

        void push(int value){
            if (top >= 100){
                cout << "Stack Overflow"; 
            } else {
                top++; 
                arr[top] = value; 
            }
        }

        void pop(){
            if (top < 0){
                cout << "Stack empty or underflow."; 
            } else {
                cout << "Removed element : " << arr[top] << endl; 
                top--; 
            }
        }

        void peek(){
            if (top < 0){
                cout << "The stack is empty."; 
            } else {
                cout << "The top element value is " << arr[top] << endl;
            }
        }
}; 

int main(){

    Stack Mgz; 

    Mgz.push(10); 
    Mgz.push(20);
    Mgz.push(30); 

    Mgz.peek(); 
    Mgz.pop();
    Mgz.peek(); 
    Mgz.pop();
    Mgz.peek(); 
    Mgz.pop();
 
    return 0; 
    
}