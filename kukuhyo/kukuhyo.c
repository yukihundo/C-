#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int yoko, tate;
	printf("\t\t九九表\r\n\r\n");
	for (tate = 0; tate < 10; tate++) {
			for (yoko = 0; yoko < 10; yoko++) {
				if (tate == 0) {
					if (yoko == 0) {
						printf("   X");
					}
					else {
						printf("%4d", yoko);
					}
				}
				else {
					if (yoko == 0) {
						printf("%4d", tate);
					}
					else {
						printf("%4d", yoko * tate);
					}

				}
		}
		printf("\r\n");
	}
}
