#include <stdio.h>

int factorial(int N) {
	return (N == 0) ? 1 : N * factorial(N - 1);
}

int main(int argc, char *argv[]) {
	int N = 5;
	int result = factorial(N);
	printf("%d", result);
}
