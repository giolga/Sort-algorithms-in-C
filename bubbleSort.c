#include <stdio.h>

//O(n^2)
int main() {
    int arr[] = {29,10,14,37,14};

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) {
        for(int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
        printf("%d ", arr[i]);

    return 0;
}