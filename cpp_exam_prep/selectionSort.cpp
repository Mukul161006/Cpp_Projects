#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for( int i = 0; i < n-1; i++){
        
        int iMin = i; 

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[iMin]){
                iMin = j; 
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[iMin]; 
        arr[iMin] = temp; 
    }
}; 

int main(){
 
    int arr[7] = {8,9,6,7,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n); 

    cout << "Selection sorted array is : \n";
    for ( int i = 0; i < n; i++ ){
        cout << arr[i] << " "; 
    }

    return 0; 
}