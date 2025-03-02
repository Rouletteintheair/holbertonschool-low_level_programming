#include "main.h"

void _putchar(char c) {
	putchar(c);
}

void print_triangle(int size) {
	if (size <= 0) {
		_putchar('\n');  // Print a newline if size is 0 or less
		return;
	}

	for (int i = 1; i <= size; i++) {
	// Print spaces for each row before the # characters
	for (int j = 1; j <= size - i; j++) {
	_putchar(' ');
	}

	// Print the # characters
	for (int k = 1; k <= i; k++) {
		_putchar('#');
	}

        // Print a newline after each row
	_putchar('\n');
	}
}
