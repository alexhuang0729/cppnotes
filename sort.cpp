#include <vector>
#include <iostream>
#include "sort.h"
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int low = i;
        for (int j = i+1; j < n; j++) {
            if (arr[low] > arr[j]) {
                low = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[low];
        arr[low] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}       