#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("chcp 65001 & cls");

    /*ABOUT ВЛАСНІСТЬ МАКОДЗЕБА ПАВЛО*/
    printf("\n   HomeSoft (R) Власність Макодзеба Павло:\n ");
    printf("\n  Copyright (C) HomeSoft Makodzeba Pavlo (R)\n\n ");

    srand(time(NULL));
    int arr[15];
    int index = 3;
    int i;
    int min;
    int max;
    int sum;
    int difference;

    printf("Випадково заповнений масив натуральних чисел: ");

    for(i = 0; i < 15; i++) {
        arr[i] = rand() % 100 + index;
        printf("%d ", arr[i]);
    }
    printf("\n");

    min = arr[0];
    max = arr[0];
    sum = arr[0];

    for(i = 1; i < 15; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    sum = max + min;
    difference = max - min;

    printf(" Сума найбільшого та найменшого елементу масиву summ : %d\n", sum);
    printf(" Різниця найбільшого та найменшого елементу масиву summ2 : %d\n", difference);
    printf("\n Натисніть ENTER для завершення програми...\n");

    getchar(); // Очікуємо введення користувача

    return 0;
}
