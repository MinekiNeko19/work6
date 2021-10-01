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
}