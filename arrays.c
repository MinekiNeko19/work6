#include <stdio.h>
#include <time.h>

int main() {
    int arr[10];
    arr[0] = 0;
    int i;
    srand(time(NULL));

    for (i = 1; i < 10; i++) {
        int x = rand();
        arr[i] = x;
    }

    for (i = 0; i < 10; i++) {
        printf("arr[%d]: %d\n",i,arr[i]);
    }

    int arr2[10];
    int *p1 = arr;
    int *p2 = arr2;

    for (i = 0; i < 10; i++) {
        // *p2 = arr[9-i];
        // p2++;
        arr2[i] = arr[9-i];
    }

    for (i = 0; i < 10; i++) {
        printf("arr2[%d]: %d\n",i,arr2[i]);
        // printf("arr[%d]: %d\tarr2[%d]: %d\n",i,arr[i],i,arr2[i]);
    }
}