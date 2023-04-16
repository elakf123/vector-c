#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ARRAY_SIZE 70000

void shellSort(int arr[], int n) {
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}


int main() {
    int arr[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100;
    }

    clock_t start_time = clock();
    shellSort(arr, ARRAY_SIZE);
    clock_t end_time = clock();
    double sort_time = (double) (end_time - start_time) / CLOCKS_PER_SEC;

    FILE *f = fopen("./data/%s.csv", "a");
    if (f == NULL) {
        printf("FileOpenError\n");
        exit(1);
    }

    fprintf(f, "%d %lf\n", ARRAY_SIZE, sort_time);

    fclose(f);

    return 0;
}
