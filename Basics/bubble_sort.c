#include <stdio.h>

void bubbleSort(int N[]);

int main(int argc, char *argv[]) {
	int N[] = {100, 123123, 1, 213123,2};
	int length = sizeof(N) / sizeof(int);
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < length; i++) {
		for (j = (i + 1); j < length; j++) {
			if (N[i] > N[j]) {
				temp = N[i];
				N[i] = N[j];
				N[j] = temp;
			}
		}
	}
	for (i = 0; i < length; i++) {
		printf("%d ", N[i]);
	}
}

