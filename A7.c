#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int a[250000];
    int k, n, j, t, d, min, sec;
    time_t start, end;

    printf("������� ���������� �����: ");
    scanf_s("%d", &n);

    for (int i = 0; i < 5; i++) {

        for (int i = 0; i < n; i++) {
            a[i] = rand() % 10000;
        }

        printf("\n");

        // ����� ����������������� ������������������, ���� �����������

        //for (int i = 0; i < n; i++) {
        //    printf("%d ", a[i]);
        //}
        //printf("\n");



        d = 0;

        start = time(NULL);

        // ��������, ������� "����������" �������� ���, ����� ����������� �������: "��������-���� ������ �� ������ ��������-�������"
        // (�.�. "���������" ���������� �������� ������ � ��� ����������� � ����� ���� �����������)

        while (d != 1) {
            d = 1;

            for (int i = 0; i < n; i++) {

                if ((2 * i + 1) < n || (2 * i + 2) < n) {

                    if ((2 * i + 1) < n && (2 * i + 2) < n) {

                        if (a[2 * i + 1] > a[i]) {

                            k = a[i];
                            a[i] = a[2 * i + 1];
                            a[2 * i + 1] = k;
                            d = 0;
                        }

                        if (a[2 * i + 2] > a[i]) {

                            k = a[i];
                            a[i] = a[2 * i + 2];
                            a[2 * i + 2] = k;
                            d = 0;
                        }
                    }
                    else {

                        if (a[2 * i + 1] > a[i]) {

                            k = a[i];
                            a[i] = a[2 * i + 1];
                            a[2 * i + 1] = k;
                            d = 0;
                        }
                    }
                }
            }
        }

        t = n;


        // ��������, ������� ������ ������� ���������� �������� �� ���� �.�. ������ ����� ������ � ����� ��������� �������� � ������� 
        // �.�. ����� ��������� (����� ������) ���� ������, � ����� "����������" �������� �� ������� ��������� 

        while (t > 1) {

            j = 0;
            k = a[j];
            a[j] = a[t - 1];
            a[t - 1] = k;

            t -= 1;

            d = 0;

            while (d != 1) {
                d = 1;

                for (int i = 0; i < t; i++) {

                    if ((2 * i + 1) < t || (2 * i + 2) < t) {

                        if ((2 * i + 1) < t && (2 * i + 2) < t) {

                            if (a[2 * i + 1] > a[i]) {

                                k = a[i];
                                a[i] = a[2 * i + 1];
                                a[2 * i + 1] = k;
                                d = 0;
                            }

                            if (a[2 * i + 2] > a[i]) {

                                k = a[i];
                                a[i] = a[2 * i + 2];
                                a[2 * i + 2] = k;
                                d = 0;
                            }
                        }
                        else {

                            if (a[2 * i + 1] > a[i]) {

                                k = a[i];
                                a[i] = a[2 * i + 1];
                                a[2 * i + 1] = k;
                                d = 0;
                            }
                        }
                    }
                }
            }
        }

        end = time(NULL);

        sec = end - start;
        min = sec / 60;
        sec = sec % 60;


        // ����� ��������������� ������������������, ���� �����������

        //for (int i = 0; i < n; i++) {
        //    printf("%d ", a[i]);
        //}

        printf("\n");

        printf("****************************************\n");
        printf("����� ������ ��������� ����������\n");
        printf("%d �����\n", min);
        printf("%d ������\n", sec);
        printf("****************************************");


    }



    return 0;
}