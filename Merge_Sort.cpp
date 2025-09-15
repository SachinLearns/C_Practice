#include <iostream>
using namespace std;

// Function to merge two sorted halves of an array
void merge(int arr[], int left, int mid, int right) {
    // Find sizes of the two subarrays to be merged
    int n1 = mid - left + 1;   // size of left half
    int n2 = right - mid;      // size of right half

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the two temporary arrays back into arr[left..right]
    int i = 0;   // initial index of left subarray
    int j = 0;   // initial index of right subarray
    int k = left; // initial index of merged subarray

    // Compare elements from L[] and R[], and copy the smaller one
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point to divide the array
        int mid = left + (right - left) / 2;

        // Recursively sort the first half
        mergeSort(arr, left, mid);

        // Recursively sort the second half
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    // Example array
    int arr[] = {6, 5, 12, 10, 9, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
    printArray(arr, arr_size);

    // Apply merge sort on the entire array
    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array: ";
    printArray(arr, arr_size);

    return 0;
}
