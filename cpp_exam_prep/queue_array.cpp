#include <iostream>
using namespace std;

class Queue{

    private: 
        int arr[100]; 
        int f; // f -> front element for the array. 
        int l; // l -> last element for the array. 

    public: 
        // Constructor to set the code path. 
        Queue(){
            f = -1; 
            l = -1; 
        }

        // ENQUEUE : join the back of the line. | FIFO | 3 Steps honge :- Phele check kro full hai ki nhi. 
        //                                                                Then 1st wali index value ka special case smbhaalo. 
        //                                                                Then last mai value update kro. 
        void enqueue(int value){
            if(l >= 99){
                cout << "QUEUE OVERFLOW !!";
            } else if (f == -1){
                f = 0;
            } else {
                l++; 
                arr[l] = value; 
            }
        }

        // DEQUEUE : to remove the first i.e. fth element of the array.   
        // 2 Steps honge :- Phele check kro poori hee khaali toh nhi pdhi hai. 
        //                  then Simply increment the fth index - to remove the list.                                                                                                  Then 1st wali index value ka special case smbhaalo.
        void dequeue(){
            if ( f < 0 || f > l ){
                cout << "THE QUEUE IS EMPTY." << endl; 
                return; 
            } else {
                cout << "\nThis element was processed and removed : " << arr[f] << endl; 
                f++;
            }
        }

        void display(){
            if(f < 0 || f > l){
                cout << "THE QUEUE IS EMPTY." << endl; 
                return;  
            } else {
                cout << "The current queue from FRONT to BACK is :- \n"; 
                for(int i = f; i <= l; i++){
                    cout << arr[i] << " ";
                }
            }
        }


}; 

int main(){

    Queue serverQueue;
    
    for(int i = 0; i <= 100; i++){
        serverQueue.enqueue(i);
    }

    serverQueue.display(); 
    
    cout << "\nThe oldest element i.e. 1 will be removed"; 
    serverQueue.dequeue();

    cout << "\nThe new queue is \n"; 
    serverQueue.display();

    return 0; 
}