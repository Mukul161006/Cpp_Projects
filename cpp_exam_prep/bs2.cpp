#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};  
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0; 
    int high = n-1; 

    while ( low <= high ){

        int mid = (low + high)/2; 

        // 3 steps mai hoga. 
        // -1- pehle recursive waali cheez daal do taaki target found ka pta pde with break keyword. 
        // -2- target value bdi ho toh lower most iundex ko increment krdo = mid + 1. 
        // -3- if target value choti ho toh highermost index ko decrement krdo = mid - 1; 
        if ( arr[mid] == target){
            cout << "Target value : " << target << " found at this position : " << mid + 1 << endl; 
            break; 
        } else if ( arr[mid] < target ){
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return 0; 
}