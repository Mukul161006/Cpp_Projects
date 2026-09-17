#include <iostream>
using namespace std;

// low -> starting element 
// high -> last element

void merge(int arr[], int low, int mid, int high){

    int n1 = mid - low + 1;
    int n2 = high - mid; 

    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = arr[low+1]; 
    }
    for(int i = 0; i < n2; i++){
        b[i] = arr[mid + 1 + i];
    }
}

void slicer(int arr[], int low, int high){

    if(low < high){
        int mid = (low + high) / 2;
        slicer(arr, low, mid); 
        slicer(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}


int main(){

    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    slicer(arr, 0, n - 1);

    cout << "Merge Sorted array is \n"; 
    for(int f=0; f<n; f++){ // f = finally bc. 
        cout << arr[f] << " ";
    }

    return 0;
}