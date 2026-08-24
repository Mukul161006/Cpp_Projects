#include <iostream>
using namespace std;

// low -> starting element 
// high -> last element

void merge(int arr[], int low, int mid, int high){
    int temp[1000]; 
    int i = low, j = mid + 1, k = low; 

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= high){
        temp[k++] = arr[j++];
    }

    for(i = low; i <= high; i++){
        arr[i] = temp[i]; // sending the data to the main array not pushing forward so no ++. 
    }
}

void slicer(int arr[], int low, int high){
    int mid = (low + high) / 2;

    if (low >= high){
        return;
    } else {
        slicer(arr, low, mid); 
        slicer(arr, mid+1, high);
    }

    merge(arr, low, mid, high);
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