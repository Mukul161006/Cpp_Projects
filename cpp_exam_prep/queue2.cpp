#include <iostream>
using namespace std;

// FIFO
class Queue{

    private: 
        int arr[100]; 
        int f; 
        int l; 

    public: 
        Queue(){
            f = -1; 
            l = -1;
        }

        void enqueue(int value){
            if( l >= 100){
                cout << "QUEUE overflowed.";
            } else if (f == -1) {
                f = 0; 
            } else {
                l++; 
                arr[l] = value; 
            }
        }

        void dequeue(){
            if( f < 0 || f > l ){
                cout << "The QUEUE IS EMPTY."; 
                return; 
            } else {
                cout << "\nElement removed : " << arr[f] << endl; 
                f++; 
            }
        }

        void display(){
            if ( f < 0 || f > l ){
                cout << "The QUEUE is EMPTY." << endl; 
                return;
            } else {
                cout << "The queue's elements from front to rear is  : \n"; 
                for( int i = f; i <= l; i++){
                    cout << arr[i] << " "; 
                }
            }
            cout << endl; 
        }

};

int main(){

    Queue waiting; 

    for(int i = 0; i <= 10; i++){
        waiting.enqueue(i);
    }
    waiting.display(); 

    waiting.dequeue(); // sbse pehle waali value khud udd jayegi. 

    cout << "The new queue is :- \n"; 
    waiting.display(); // 25 50 75

    return 0; 
}
