#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)



int main() {

	int x;
	int temp;
	int bag=0;
	
	int flag = 0;

	scanf("%d", &x);

	if (x <= 0) {
		printf("-1");
		exit(1);
	}
	
	else {
		for (int i = 0; i < 2000; i++) {
			for (int j = 0; j <= 1000; j++) {
				if (3 * i + 5 * j == x) {
					flag++;
					bag = i + j;
					break;
				}
			}
			if (flag != 0) break;
		}
	}
	if (flag == 0) bag = -1;

	printf("%d", bag);


	return 0;
}
