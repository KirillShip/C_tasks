/*
16 вариант
Ввести с клавиатуры три целых числа (длины сторон треугольника).
Определить, возможно, ли построить по этим числам треугольник. Ответ
вывести в виде сообщеиия.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод длин сторон треугольника
    printf("Введите длины сторон треугольника:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Проверка условия существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        printf("Треугольник с такими сторонами возможен.\n");
    } else {
        printf("Треугольник с такими сторонами невозможен.\n");
    }

    return 0;
}
