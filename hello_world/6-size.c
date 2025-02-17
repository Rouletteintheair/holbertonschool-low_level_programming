#include<stdio.h>

/**
 * main-Entry main
 * Return:Always 0
 */

int main(void)
{
	int intType;
	float floatType;
	long longType;
	long long longlongType;
	char charType;

	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}

