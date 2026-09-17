#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,4,2,56,79};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 56; 

    for(int i = 0; i < n; i++){
        if ( arr[i] ==  target ){
            cout << "Target " << target << " found at this position : " << i+1 << endl; 
        }
    }

    return 0;
}