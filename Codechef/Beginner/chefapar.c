#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int T = 0, N = 0;
	int index_pay = 0, flagging_index = 0;
	int total = 0, total_fine = 0;
	scanf("%d", &T);
	int counter = 0, sub_counter = 0;
	for (counter = T; counter > 0; counter--) {
		scanf("%d", &N);
		int input[N];
		for (sub_counter = 0; sub_counter < N; sub_counter++) {
			scanf("%d", &input[sub_counter]);
		}
 
		int size = sizeof(input) / sizeof(int);
		for (sub_counter = 0; sub_counter < size; sub_counter++) {
			if (input[sub_counter] == 0) {
				flagging_index++;
			} else {
				if (input[sub_counter] == 1) {
					flagging_index++;
					index_pay++;
				}
				if (index_pay < flagging_index) {
					total_fine += 100;
				}
			}
		}
		total = total_fine + (flagging_index - index_pay) * 1100;
		printf("%d\n", total);
		
		flagging_index = 0;
		index_pay = 0;
		total_fine = 0;
		total = 0;
	}
}

