#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); // generate seed using time
    //printf("random number: %d\n", rand());

    int arr[10]; // first array
    int arr2[10]; // second array

    int * p = arr; // pointer to first
    int * p1 = arr2; // pointer to second

    // populate first array with randoms
    int i;
    for (i = 0; i < 9; i++) {
        arr[i] = rand();
    } arr[9] = 0; // set last value to 0

    // printf("array[8]: %d\n", arr[8]);
    int temp = 9;
    for (i = 0; i < 9; i++) {
        *(arr2 + i) = *(arr + temp);
        temp--;
    }


    for (i = 0; i < 9; i++) {
        printf("arr2[%d]: \n", arr2[i]);
    }


}
