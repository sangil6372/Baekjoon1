#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

int LastNum_Of_Line(int n) {
	return n * (n + 1) / 2;
}

int main() {

	int x;
	scanf("%d", &x);

	int line = 1;
	while (1) {
		if (LastNum_Of_Line(line) >= x) {
			break;
		}
		line++;
	}

	x = x - (line - 1)*line / 2;

	if (line % 2 == 0) { //짝수 번 째 대각선이면
		printf("%d/%d", x, line - (x-1));
	}
	else printf("%d/%d", line - (x - 1), x);

}
