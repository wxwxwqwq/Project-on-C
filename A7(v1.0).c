#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    //srand(time(NULL));
    setlocale(LC_ALL, "rus");

    int a[1000];
    int k, n, j, t, d;
    
    printf("Укажите количество чисел: ");
    scanf_s("%d", &n);
    
    //for (int i = 0; i < n; i++) {
    //    a[i] = rand() % 10000;      
    //}
    
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    for (int i = ((n / 2) - 1); i >= 0; i--) {
        j = i;
        
        while ((2 * j + 1) <= (n - 1) || (2 * j + 2) <= (n - 1)) {
            
            if ((2 * j + 1) <= (n - 1) && (2 * j + 2) <= (n - 1)) {
                 
                if (a[(2 * j) + 1] >= a[(2 * j) + 2]) {

                    k = a[j];
                    a[j] = a[(2 * j) + 2];
                    a[(2 * j) + 2] = k;
                    j = (2 * j) + 2;
                }
                else {

                    k = a[j];
                    a[j] = a[(2 * j) + 1];
                    a[(2 * j) + 1] = k;
                    j = (2 * j) + 1;
                }
            }
            else {

                k = a[j];
                a[j] = a[(2 * j) + 1];
                a[(2 * j) + 1] = k;
                j = (2 * j) + 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    t = n;
    
    while (t > 1) {
        
        j = 0;
        k = a[j];
        a[j] = a[t - 1];
        a[t - 1] = k;

        t--;

        while ((2 * j + 1) <= (t - 1) || (2 * j + 2) <= (t - 1)) {

            if ((2 * j + 1) <= (t - 1) && (2 * j + 2) <= (t - 1)) {

                if (a[(2 * j) + 1] >= a[(2 * j) + 2]) {

                    k = a[j];
                    a[j] = a[(2 * j) + 2];
                    a[(2 * j) + 2] = k;
                    j = (2 * j) + 2;
                }
                else {

                    k = a[j];
                    a[j] = a[(2 * j) + 1];
                    a[(2 * j) + 1] = k;
                    j = (2 * j) + 1;
                }
            }
            else {

                k = a[j];
                a[j] = a[(2 * j) + 1];
                a[(2 * j) + 1] = k;
                j = (2 * j) + 1;
            }
        }
    }
    
    
   for (int i = (n - 1); i >= 0; i--) {
       printf("%d ", a[i]);
   }
    
    

    return 0;
}