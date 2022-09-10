#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) return a;
    else {
        while (true) {
            if (a > b) {
                answer += a;
                a--;
            }
            else if (a < b) {
                answer += a;
                a++;
            }
            if (a == b) {
                answer += a;
                break;
            }
        }
    }
    return answer;
}