#include<iostream>
using namespace std;


void bubSort (int arr[], int size) {

    for (int i = 0; i < size-1; i++) {
        
        for (int j = 0; j < size-i-1; j++) {

            int temp = 0;

            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for (int i = 0; i < size; i++) {
        
        cout << arr[i] << " ";
    
    }    
    

        
}




int main() {
               
    int arr[] = {4,1,5,2,3}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    bubSort(arr, size);



    return 0;
}
