#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // requires an sorted array already from the starting. 
    int target;
    bool found = false;  

    // here we specify the index of the array.
    int low = 0;  
    int high = sizeof(arr)/sizeof(arr[0]) + 1; // to bring the compiler to the last index value. 

    cout << "Target ?? "; 
    cin >> target;

    while(low <= high){

        // Find the exact middle. 
        int mid = (low + high) / 2;

        if (arr[mid] == target){
            cout << "Target value " << target << " found at this index position -> " << mid + 1 << endl; 
            found = true;
            break;
        } 
        else if (arr[mid] < target){
            low = mid + 1; 
        }
        else { //(arr[mid] > target) wala case. 
            high = mid - 1; 
        }
    }
    
    if (!found) {
        cout << "Target not found !!" << endl;
    }

    return 0; 
}