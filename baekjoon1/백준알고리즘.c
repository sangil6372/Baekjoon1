#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)


int main() {
	
	double arr[1000] = { 0 };
	int rep;
	double max = 0;
	int max_index = 0;
	double result = 0;

	scanf("%d", &rep);


	for (int i = 0; i < rep; i++) {
		scanf("%lf", &arr[i]);
	}

	for (int i = 0; i < rep; i++) {
		if (arr[i] > max) {
			max_index = i;
			max = arr[i];
		}
	}

	for (int i = 0; i < rep; i++) {
			result += arr[i] / max * 100;	
	}
	
	printf("%.14lf", result / rep);
	


}