#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)


int FirstNum_Of_Line(int n) {
	return 3 * n*(n + 1) + 1;
}

int main() {

	int x;
	scanf("%d", &x);

	int line = 0;
	while (1) {
		if (FirstNum_Of_Line(line) > x) {
			line = line - 1;
			break;
		}
		line++;
	}
	printf("%d", line);

	return 0;
}