#include<iostream>
using namespace std;

/*

 i = 0 1 2  3  4  5  6  7  8  9  10 11 12 13 14

 a = 4 8 10 15 18 21 24 27 29 33 34 37 39 41 43

 key/toSearch = 18

At start:

    low = inital 0 index   =  0

    high = initial last index  = 14

    mid = (low + high) / 2

    mid = 7 

    check if key is mid?
    check smaller or greater than mid
    its smaller, so key is on the left side of mid 

    now reduce the list into half

    so low still same
    Move high to mid-1 (its not 7, so before that)

    After list halved
    mid = 0+6/2 =  3 (index)
    key > or < than mid?
    18 > 15 
    so, on right side of mid

    Change low to mid+1, = 4
    high remains same
    Mid = 4+6/2 = 5
    compare again
    18 < 21
    so its on the left side

    Now high = mide-1   =  4
    Mid = 4+4/2 = 4
    check again?
    Key found at mid
    4 comparisons

    



*/


int binarySearch (int arr[], int size, int search) {

    int low, high, mid;
    low = 0;
    high = size-1;
    
    while (low <= high) {

        mid = (low+high)/2;

        if (search == arr[mid]){
            return mid;
        }

        else if (search < arr[mid]) { // if less than mid, key on left side
            high = mid - 1;
        }

        else {   // otherwise, defo on right side, no need to check
            low = mid + 1;

        }
    }
    
    return -1;
        
    }




int main() {
               //L           H
    int arr[] = {1,2,3,4,5,6,7}; // must be sorted, low to high
    int size = 7;

    int search = 7; // number to search in list

    cout << binarySearch(arr, size, search); // will give index position


    return 0;
}
