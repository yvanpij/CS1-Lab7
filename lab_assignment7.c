#include <stdio.h>

// perform the bubble sort and compute swaps
void bubbleSort(int array[], int size, int swaps[]) {
    for (int step = 0; step < size; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swaps[step]++;
            }
        }
    }
}

// print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// print swaps
void printSwaps(int swaps[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Swaps needed for index %d: %d\n", i, swaps[i]);
    }
}

int main() {
    int data[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(data) / sizeof(data[0]);
    int swaps[size];

    // Initialize swaps array with zeros
    for (int i = 0; i < size; ++i) {
        swaps[i] = 0;
    }

    bubbleSort(data, size, swaps);

    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);

    printf("Number of swaps needed for each index:\n");
    printSwaps(swaps, size);

    return 0;
}