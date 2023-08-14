#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#include "Модуль.h"


int main(void) {

    setlocale(LC_ALL, "rus");

    int a[2];

    a[1] = ram();

    printf("%d %d");

    _getch();
    return 0;
}