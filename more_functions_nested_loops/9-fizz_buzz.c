#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i > 1) {
			printf(" ");  // Print space before the next number/word
			 }
        
		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz");
		} else if (i % 3 == 0) {
			printf("Fizz");
		} else if (i % 5 == 0) {
			printf("Buzz");
		} else {
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}
