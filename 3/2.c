/*
16 вариант
Ввести с клавиатуры три целых числа (длины сторон треугольника).
Определить, возможно, ли построить по этим числам треугольник. Ответ
вывести в виде сообщеиия.
*/

#include <stdio.h>
#include <inttypes.h>
#include "2.h"

void printIsExistTriangle(int64_t a, int64_t b, int64_t c){
    // Проверка условия существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        printf("A triangle with such sides is possible.\n");
    } else {
        printf("A triangle with such sides is impossible.\n");
    }
}

void secondTask() {
    int64_t ai64, bi64, ci64;

    // Ввод длин сторон треугольника
    printf("Enter the lengths of the sides of the triangle:\n");
    scanf("%"SCNd64 "%"SCNd64 "%"SCNd64 , &ai64, &bi64, &ci64);
    printIsExistTriangle(ai64, bi64, ci64);
    
    return;
}
