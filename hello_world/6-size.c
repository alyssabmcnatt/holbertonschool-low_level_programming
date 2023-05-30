#include <stdio.h>
/**
 * main -main function
 * Return: -returns 0
 */


int main()
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long));
	printf("Size of a long long int: %lu byte(s)", sizeof(double));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
