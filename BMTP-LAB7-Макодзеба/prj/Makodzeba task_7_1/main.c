#include <stdio.h>

int main() {

   /*ABOUT ВЛАСНІСТЬ МАКОДЗЕБА ПАВЛО*/
    //printf("Copyright (C) HomeSoft (R) Власність Макодзеба Павло:\n ");
    printf("\n  \x2A\x2A\x2A  \x82\xAB\xA0\xE1\xAD\x69\xE1\xE2\xEC\ ");
    printf("\x8C\x80\x8A\x8E\x84\x87\x85\x81\x80\x20\x8F\x80\x82\x8B\x8E  \x2A\x2A\x2A\n ");
    printf("Copyright (C) HomeSoft Makodzeba Pavlo (R)\n ");

    /*Опис про програму*/
    printf("\n       \x90\x8E\x87\x90\x8E\x81\x8A\x80\x20\x8F\x90\x8E\x83\x90\x80\x8C\x88   ");
    printf("\n  \x8F\x8E\x98\x93\x8A\x20\x91\x8A\x8B\x80\x84\x93\x20\x22\x8C\x80\x22\x20\x82\x20\x91\x8B\x8E\x82\x49\n ");

    /*Введіть слово без пробілу*/
    printf("\n\x82\xA2\xA5\xA4\x69\xE2\xEC \xE1\xAB\xAE\xA2\xAE \xA1\xA5\xA7 ");
    printf(" \xAF\xE0\xAE\xA1\x69\xAB\xE3 \xA2 \xAA\x69\xAD\xE6\x69 ");
    printf("\x28\x22\x7E\x22\x2C \xA0\xA1\xAE \x22\xF8\x2F\x2E\x22\x2C \x22\x2A\x25\x22\x29 \n  ");

    int counter_ma = 0;
    int wordCount = 0;
    char input[100];
    char lastChar;


    // Ввід рядка з клавіатури
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        //printf("%c: %d\n", input[i], input[i]);
        lastChar = input[i];
    }

    // Перевірка на наявність символів ~, %, * в кінці рядка
    if (lastChar == '~' || lastChar == '%' || lastChar == '*') {
        for (int i = 0; input[i] != '\0';) {
            if (input[i] == (char)-84 && input[i+1] == (char)-96 ||
                input[i] == (char)-116 && input[i+1] == (char)-128 ||
                input[i] == (char)-116 && input[i+1] == (char)-96) {
                counter_ma++;
                i ++;
            } else if ((input[i] == (char)-95 || input[i] == (char)-94 || input[i] == (char)-93 ||
                        input[i] == (char)-92 || input[i] == (char)-90 || input[i] == (char)-89 ||
                        input[i] == (char)-86 || input[i] == (char)-85 || input[i] == (char)-84 ||
                        input[i] == (char)-83 || input[i] == (char)-81 || input[i] == (char)-32 ||
                        input[i] == (char)-31 || input[i] == (char)-30 || input[i] == (char)-28 ||
                        input[i] == (char)-27 || input[i] == (char)-26 || input[i] == (char)-25 ||
                        input[i] == (char)-24 || input[i] == (char)-23)) {
                //printf("%c: %d\n", input[i], input[i]);
                wordCount++;
               i ++;
            } else {
                i++;
            }
        }
    } else {
        printf("\n\x8D\x85 \xA2\xA8\xAA\xAE\xAD\xA0\xAD\xA0 \xE3\xAC\xAE\xA2\xA0\ \xA2\xA2\xA5\xA4\xA5\xAD\xAD\xEF: ");
    }

    if (counter_ma > 0) {
        printf("\n\x91\xAA\xAB\xA0\xA4\x69\xA2\ MA: %d\n", counter_ma);
    } else {
        printf("\n\x8A\x69\xAB\xEC\xAA\x69\xE1\xE2\xEC\ \xAF\xE0\xA8\xA3\xAE\xAB\xAE\xE1\xA8\xE5\: %d\n", wordCount);
    }

    getchar();

    return 0;

}

