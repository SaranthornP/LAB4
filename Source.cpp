#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	char a[1000000];
	int b = 0;
	int x = 0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++) {
		if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122)) {
			b = 0;
			if (a[i - 1] >= '0' && a[i - 1] <= '9') {
				x = 1;
				while (a[i - x] >= '0' && a[i - x] <= '9') {
					b = b+(a[i - x] - '0')*pow(10,x-1);
					x++;
				}
			}
			else b = 1;
			for (int j = 0; j < b; j++) {
				printf("%c", a[i]);
			}
		}
	}
	return 0;
}