#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2,8,1,13,11};

    // i => index 
    for(int i = 1; i < 5; i++){

        int c = arr[i]; // c => current element or value floating for comparison
        int j = i-1; // j => the index juggler
        
        while(j >= 0 && arr[j] > c){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = c; // Here we've used the [j + 1] to simply put the right shifted value into the gap we just created. 
                      // simply said to put the greater values to the right.
    }

    cout << "Sorted array is : \n";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}