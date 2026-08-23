#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target; 

    // here we specify the index of the array.
    int low = 0;  
    int high = sizeof(arr)/sizeof(arr[0]) + 1; // to bring the compiler to the last index value. 

    cout << "Target ?? "; 
    cin >> target;

    




    return 0; 
}