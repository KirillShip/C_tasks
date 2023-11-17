/*
16 вариант
Записать логическое выражение, определяющее, что из четырех чисел
A,B,C.D два являются четными
*/

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include "1.h"

bool areTwoEven(int32_t A, int32_t B, int32_t C, int32_t D) {
    int32_t count = 0;

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
        return true;
    }
    return false;
}

void firstTask()
{
    int64_t ai64, bi64, ci64, di64;
    scanf("%"SCNd64 "%" SCNd64 "%" SCNd64 "%" SCNd64, &ai64, &bi64, &ci64, &di64);
    printf("%"PRId64"\n",areTwoEven(ai64, bi64, ci64, di64));
    return ;
}
