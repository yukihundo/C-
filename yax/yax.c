#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a = 0,x=0,y=0;
    printf("傾きaは?");scanf("%d",&a);
    for (x = -10; x <= 10; x++) {
        y = a * x;
        printf("x=%d,y=%d\r\n",x,y);
    }
}