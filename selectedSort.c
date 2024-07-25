#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int arr[] = {29,10,14,37,13};

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) 
            if(arr[minIdx] > arr[j]) 
                minIdx = j;

        if(minIdx != i) 
            swap(&arr[minIdx], &arr[i]);
    }

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%d ", arr[i]);

}