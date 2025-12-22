#include<iostream>
#include<vector>
using namespace std;


void merge (vector<int> &arr, int start, int mid, int end) {
    
    vector<int> temp;
    int i = start; // left's start
    int j = mid + 1; // right's start

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) { // for left over elements
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) { // for left over elements
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) {

        arr[idx + start] = temp[idx];
    }
}

void mergeSort (vector<int> &arr, int start, int end) {
    
    if (start < end) {

        int mid = start + (end-start)/2;
        
        mergeSort (arr, start, mid);

        mergeSort (arr, mid+1, end);

        merge (arr, start, mid, end);

    }
}


int main() {
               
    vector<int> arr = {5, 2, 8, 12, 3}; 

    mergeSort(arr, 0, arr.size()-1);

    for (int val : arr) {
        cout << val << " ";
    }



    return 0;
}
