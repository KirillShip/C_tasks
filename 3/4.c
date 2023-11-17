/*
16 вариант
Дано целое число N (> 2) и две вещественные точки на числовой оси: A,
В (A < В). Отрезок [A, В] разбит на равные отрезки длины H с концами в
N точках вида [A, А + Н, А + 2H, А + ЗН, В]. Найти значение H и набор из
N точек, образующий разбиение отрезка [A, В]
*/

#include <stdio.h>
#include <inttypes.h>

void fragments(int64_t N, int64_t A, int64_t B){
    // Вычисление значения H
    float H = (B - A)*1. / (N-1);

    // Вывод значения H
    printf("H value: %f\n", H);

    // Вычисление и вывод набора из N точек с помощью цикла с параметром
    printf("A set of %"PRId64" points:\n", N);
    for (int i = 0; i < N; i++) {
        float point = A + i * H;
        printf("%f\n", point);
    }
    return;
}

void fourthTask() {
    int64_t Ni64;
    float A, B;
    
    printf("Enter an integer N (> 2):");
    scanf("%"SCNd64, &Ni64);
    printf("Enter two real points on the number axis A and B (A < B): ");
    scanf("%f %f", &A, &B);
    fragments(Ni64, A, B);

    return;
}
