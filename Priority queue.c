#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <malloc.h>
#include "������ �������.h"

int main(void) {

    setlocale(LC_ALL, "rus");

    int k, p, d, result, num;


    printf("������� �����: ");
    scanf_s("%d", &k);

    printf("\n");

    printf("������� ��������� ����� ����� � ������� �� 1 �� 10: ");
    scanf_s("%d", &p);

    printf("\n");

    if (p > 10) {

        p = 10;
    }
    else if (p < 1) {

        p = 1;
    }


    // �������, ��������� ������ ��������� ������
    root_input(k, p);


    printf("�� ������ �������� ��� ����� � �������?\n");
    printf("������� 1, ���� ��. ������� 0, ���� ���.\n");
    scanf_s("%d", &d);


    while (d != 0) {

        printf("\n");

        printf("������� �����: ");
        scanf_s("%d", &k);

        printf("\n");

        printf("������� ��������� ����� ����� � ������� �� 1 �� 10: ");
        scanf_s("%d", &p);

        printf("\n");

        if (p > 10) {

            p = 10;
        }
        else if (p < 1) {

            p = 1;
        }


        // �������, ����������� �������� ����� � �������� ������ ������
        input(k, p);


        printf("�� ������ ���������� ���������� ����� � �������?\n");
        printf("������� 1, ���� ��. ������� 0, ���� ���.\n");
        scanf_s("%d", &d);

    }

    printf("\n");



    printf("����� ������� ����� �� �������, ������� 1\n");
    printf("����� ����� �� ���������, ������� 0\n");
    scanf_s("%d", &d);

    printf("\n");



    while (d != 0) {

        // �������, ������� ���������, ���� �� � ������� �����
        result = search();


        if (result == 0) {

            printf("� ������� ��� �� ������ �����, ���������� ������ �����, ����� ���������� ����� �� �������\n");
            d = 0;
        }
        else {
            
            // �������, ��������� �� ������� ���������� �� ���������� �����, � ����� ��������� ��� ����� �� �������
            num = output();

            printf("����� � ���������� �����������: %d\n", num);
            printf("\n");

            printf("����� ������� ����� �� �������, ������� 1\n");
            printf("����� ����� �� ���������, ������� 0\n");
            scanf_s("%d", &d);

            printf("\n");
        }

    }


    return 0;
}