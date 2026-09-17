#include <iostream>
using namespace std;

int main(){
    int arr[5] = {23,56,76,16,19}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){

            if(arr[j] > arr[j+1]){

                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }

    cout << "Bubble sorted array is : \n"; 
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0; 
}

/*
#include<iostream>
using namespace std;

int main(){
    int arr[7] = {8,9,6,7,5,4,3};
    int temp;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<7; i++){
        cout <<" "<< arr[i];
    }
    return 0;
}
*/