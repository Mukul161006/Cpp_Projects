#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,5,7,9};
    int target; 

    cout << "Target ?? "; 
    cin >> target; 

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] ==  target){
            cout << "target found at " << arr[i] << " this position -> " << i+1 << endl; 
        }
    }

    cout << "Target not found !!" << endl; 

    return 0; 
}