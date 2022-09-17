#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long pay = 0;
    for (int i = 1; i <= count; i++) {
        pay += (price * i);
    }
    if (pay - money > 0) answer = pay - money;
    else if (pay - money <= 0) answer = 0;

    return answer;
}