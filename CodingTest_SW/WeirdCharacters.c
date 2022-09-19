#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(strlen(s) + 1);
    int index = 0;
    strcpy(answer, s);
    for (int i = 0; i < strlen(answer); i++) {
        if (answer[i] == ' ') {
            index = 0;
        }
        else if (index % 2 == 0) {
            answer[i] = toupper(answer[i]);
            index++;
        }
        else if (index % 2 == 1) {
            answer[i] = tolower(answer[i]);
            index++;
        }
    }
    return answer;
}