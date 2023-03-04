//
//  main.cpp
//  insertionSort
//
//  Created by Mahesh Kulkarni on 03/03/23.
//

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1;i<size;i++) {
        int key = arr[i];
        int j=i-1;
        
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {10, 20, 15, 2, 23, 90, 67};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sort"<<endl;
    printArray(arr, size);
    insertionSort(arr, size);
    cout<<"Array after sort"<<endl;
    printArray(arr, size);
    return 0;
}
