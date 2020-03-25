#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ALT(char);
int sum = 0;
int main(void)
{
	char num[99];
	int x = 0;
	scanf("%s", num);
	printf("Formulu ");
	printf("%s", num);
	printf("=");
	for (int i = 0; i < 5; i++) {
		if (num[i] == '+' || num[i] == '-') {
			sum += atoi(num);
			for (int j = 0; num[j] != '\0'; j++) {
				num[j] = num[j + i];
			}
		}
	}
	ALT(num);
	printf("%d\n", sum);
	system("pause"); return 0;
}
int ALT(char x[99])
{
	if (x[0] == '+') {
		for (int j = 0; x[j] != '\0'; j++) x[j] = x[j + 1];
		sum += atoi(x);
		for (int i = 1; i < 6; i++) {
			if (x[i] == '+' || x[i] == '-' || x[i] == '\0') {
				for (int j = 0; x[j] != '\0'; j++) x[j] = x[j + i];
				ALT(x);
			}
		}
	}
	else if (x[0] == '-') {
			for (int j = 0; x[j] != '\0'; j++) x[j] = x[j + 1];
			sum -= atoi(x);
			for (int i = 1; i < 6; i++) {
				if (x[i] == '+' || x[i] == '-' || x[i] == '\0') {
					for (int j = 0; x[j] != '\0'; j++) x[j] = x[j + i];
					ALT(x);
				}
			}
	}
	else return 0;
}