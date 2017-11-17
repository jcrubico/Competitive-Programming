#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int T = 0;
	int a = 0, b = 0;
	int counter = 0;
	int modA = 0, modB = 0;
	int sum = 0;
	int fetcher = 1;
	int total = 0;
	scanf("%d", &T);
	for (counter = 1; counter <= T; counter++) {
		scanf("%d%d", &a, &b);
		while (a > 0 || b > 0) {
			modA = a % 10;
			modB = b % 10;
			sum = (modA + modB) % 10;
			total += sum * fetcher;
			a /= 10;
			b /= 10;
			fetcher *= 10;
		}
		printf("%d\n", total);
		total = 0;
		fetcher = 1;
	}
}

