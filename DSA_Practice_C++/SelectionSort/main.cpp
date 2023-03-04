//
//  main.cpp
//  SelectionSort
//
//  Created by Mahesh Kulkarni on 04/03/23.
//

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    
    for(int i=0;i<size-1;i++) {
        int minIndex = i;
        for(int j=i+1;j<size;j++) {
            if (arr[j]<arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
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
    selectionSort(arr, size);
    cout<<"Array after sort"<<endl;
    printArray(arr, size);
    return 0;
}
