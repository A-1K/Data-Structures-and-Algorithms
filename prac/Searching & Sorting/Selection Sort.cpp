#include<iostream>
using namespace std;


void selecSort (int arr[], int size) {

    for (int i = 0; i < size-1; i++) {

        int minPos = i;  // assume current, first element of unsorted part is always smallest

        for (int j = i+1 ; j < size; j++) { // start one after i since previous element becomes part of sorted list
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }


        // swap arr[i] with arr[minPos]
        int min = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = min;



    }
    
    
    

    for (int i = 0; i < size; i++) {
        
        cout << arr[i] << " ";
    
    }        
    

        
}




int main() {
               
    int arr[] = {4,1,5,2,3,7,0}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    selecSort(arr, size);



    return 0;
}
