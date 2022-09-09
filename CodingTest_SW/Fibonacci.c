#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int p[n + 1];
    p[0] = 0;
    p[1] = 1;
    for (int i = 2; i <= n; i++) {
        p[i] = (p[i - 1] % 1234567 + p[i - 2] % 1234567) % 1234567;
    }
    answer = p[n];

    return answer;
}