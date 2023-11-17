/*
16 вариант
Записать логическое выражение, определяющее, что из четырех чисел
A,B,C.D два являются четными
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0 

int areTwoEven(int A, int B, int C, int D) {
    int count = 0;

    if (A % 2 == 0) {
        count++;
    }
    if (B % 2 == 0) {
        count++;
    }
    if (C % 2 == 0) {
        count++;
    }
    if (D % 2 == 0) {
        count++;
    }
    if (count == 2){
        return TRUE;
    }
    return FALSE;
}

int main()
{
    printf("%d",areTwoEven(2, 3, 4, 5));

    return 0;
}
