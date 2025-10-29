#include<iostream>
using namespace std;

bool linearSearch (int arr[], int size, int search) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            return true;
        }
    }

    return false;

}


int main() {
    
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int search = 6; // number to search in list

    cout << linearSearch(arr, size, search); // 1 for num found, 0 for not found


    return 0;
}
