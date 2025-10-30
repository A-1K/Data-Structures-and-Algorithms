#include<iostream>
using namespace std;


void inserSort (int arr[], int size) {

    for (int i = 1; i < size; i++) { // i = 1 so we start at first element of unsorted list. assume first element is sorted part
        
        int current = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr[prev] > current) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = current;

    }
    
    
    

    for (int i = 0; i < size; i++) {
        
        cout << arr[i] << " ";
    
    }        
    

        
}




int main() {
               
    int arr[] = {4,1,5,2,3,7,0}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    inserSort(arr, size);



    return 0;
}
