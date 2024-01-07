#include <stdio.h>
#include <math.h>
#define MAXSIZE 1000

int res_size = 470;
int n = 4;
double waight[MAXSIZE] = { 195.1,267.0,229.0,236.0 };
double sales[MAXSIZE] = { 152,208,178,184 };

void donkusa();
void input_data();

void main(void) {
    donkusa();
}

void donkusa() {
        int i, j, x = 0;
        double restriction[MAXSIZE] = { 0 };//売上
        double greatest[MAXSIZE] = { 0 };//重さ
        double max_greatest = 0.0;
        for (i = 0; i < pow(2, n); i++) {
            restriction[i] = 0.0;
            greatest[i] = 0.0;
            for (j = 0; j < n; j++) {
                restriction[i] += waight[j] * ((i >> (j)) & 1);
                greatest[i] += sales[j] * ((i >> (j)) & 1);
            }
            if (restriction[i] <= res_size) {
                if (max_greatest < greatest[i]) {
                    max_greatest = greatest[i];
                    x = i;
                }
                printf("%4d %9.1f %9.1f\r\n", i, restriction[i], greatest[i]);
            }
            else {
                printf("%4d %9.1f    x\r\n", i, restriction[i]);
            }
        }
        printf("-------------------------\n");
        printf("%dの重さが%5.3fを採用します。 \r\n", x, restriction[x]);
        printf("売上は%5.1fです。\n" ,max_greatest);
        printf("ナップサックには、");
        for (j = 0; j < n; j++) {
            if (((x >> (j)) & 1) == 1)printf("x%d,", j);
        }
        printf("\r\n");
        printf("を入れます。\n");
    }