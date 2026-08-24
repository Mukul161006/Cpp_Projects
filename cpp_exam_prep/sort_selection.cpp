#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int mainPos = 0; mainPos < n-1; mainPos++){

        int minIndex = mainPos; 
        
        for(int scanner = mainPos + 1; scanner < n; scanner++){
            if(arr[scanner] < arr[minIndex]) {
                minIndex = scanner;
            }
        }

        if(minIndex != mainPos){
            int temp = arr[minIndex];
            arr[minIndex] = arr[mainPos]; 
            arr[mainPos] = temp; 
        }
    }

}

int main(){

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Selection Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0; 
}