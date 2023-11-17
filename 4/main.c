/*
В соответствии с заданием в лекции необходимо создать функции, которые 
переворачивают одномерный массив  
сортируют одномерный массив 
Каждое решение должно быть представлено  в двух видах:
по указателю на старт и количеству элементов;
по указателю на старт и на следующий за последним элементами массива.
*/

#include <stdio.h>

void array_reverse(int* arr, int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        swap(&start, &end);
        
        start++;
        end--;
    }
}

void array_reverse_part(int* arr, int* arrEndElem) {
    int* start = arr;  
    int* end = arrEndElem - 1;
    while (start != end) {
        swap(start, end);
        
        start = start + 1;
        if (start == end)
            return;
        end = end - 1;
    }
}

void sort_array(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void sort_array_part(int* arr, int* arrEndElem) {
    /*
    int size = (sizeof(arr) - sizeof(arrEndElem - 1)) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }*/
    return;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrayPrint(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 8, 4, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Переворачиваем массив 1 способом
    array_reverse(arr, size);
    printf("Reversed array 1: \n");
    arrayPrint(arr, size);
    
    array_reverse_part(arr, arr + size);
    printf("Reversed array 2: \n");
    arrayPrint(arr, size);

    // Сортируем массив 1 способом
    sort_array(arr, size);
    printf("Sorted array 1: \n");
    arrayPrint(arr, size);

    // Сортируем массив 2 способом
    sort_array_part(arr, arr + size);
    printf("Sorted array 2: \n");
    arrayPrint(arr, size);   

    return 0;
}