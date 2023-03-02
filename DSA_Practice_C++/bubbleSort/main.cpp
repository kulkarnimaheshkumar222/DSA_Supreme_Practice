//
//  main.cpp
//  bubbleSort
//
//  Created by Mahesh Kulkarni on 02/03/23.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size) {
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {10, 20, 15, 2, 23, 90, 67};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Print array befor sort"<<endl;
    printArray(arr, size);
    bubbleSort(arr, size);
    cout<<"Print array after sort"<<endl;
    printArray(arr, size);
}
