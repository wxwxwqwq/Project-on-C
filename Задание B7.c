#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <malloc.h>
#include "Логика очереди.h"

int main(void) {

    setlocale(LC_ALL, "rus");

    int k, p, d, result, num;


    printf("Введите число: ");
    scanf_s("%d", &k);

    printf("\n");

    printf("Введите приоритет этого числа в очереди от 1 до 10: ");
    scanf_s("%d", &p);

    printf("\n");

    if (p > 10) {

        p = 10;
    }
    else if (p < 1) {

        p = 1;
    }


    // Функция, создающая корень бинарного дерева
    root_input(k, p);


    printf("Вы хотите добавить ещё числа в очередь?\n");
    printf("Введите 1, если да. Введите 0, если нет.\n");
    scanf_s("%d", &d);


    while (d != 0) {

        printf("\n");

        printf("Введите число: ");
        scanf_s("%d", &k);

        printf("\n");

        printf("Введите приоритет этого числа в очереди от 1 до 10: ");
        scanf_s("%d", &p);

        printf("\n");

        if (p > 10) {

            p = 10;
        }
        else if (p < 1) {

            p = 1;
        }


        // Функция, добавляющая введённое число в бинарное дерево поиска
        input(k, p);


        printf("Вы хотите продолжить добавление чисел в очередь?\n");
        printf("Введите 1, если да. Введите 0, если нет.\n");
        scanf_s("%d", &d);

    }

    printf("\n");



    printf("Чтобы выбрать число из очереди, введите 1\n");
    printf("Чтобы выйти из программы, введите 0\n");
    scanf_s("%d", &d);

    printf("\n");



    while (d != 0) {

        // Функция, которая проверяет, есть ли в очереди числа
        result = search();


        if (result == 0) {

            printf("В очереди нет ни одного числа, необходимо ввести числа, чтобы произвести выбор из очереди\n");
            d = 0;
        }
        else {
            
            // Функция, выводящая из очереди наибольшее по приоритету число, а затем удаляющая это число из очереди
            num = output();

            printf("Число с наибольшим приоритетом: %d\n", num);
            printf("\n");

            printf("Чтобы выбрать число из очереди, введите 1\n");
            printf("Чтобы выйти из программы, введите 0\n");
            scanf_s("%d", &d);

            printf("\n");
        }

    }


    return 0;
}