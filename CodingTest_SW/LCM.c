#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int gcd = 0;
    for (int i = 0; i < arr_len - 1; i++) {
        int a = arr[i];
        int b = arr[i + 1];

        if (a > b) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        for (int j = 1; j < b; j++) {
            if (a % j == 0 && b % j == 0) {
                gcd = j;
            }
        }
        arr[i + 1] = a * b / gcd;
    }
    answer = arr[arr_len - 1];
    return answer;
}