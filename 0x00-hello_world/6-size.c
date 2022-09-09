#include <stdio.h>
/**
 * main - print the strin in the put function
 * prints the size of various types on the computer it is compiled and run on
 * Return: ALways 0
 */
int main(void)
{
	char c;
	int f;
	long int il;
	long long int ilil;
	float v;
 	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(il));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ilil));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));
	return(0);
}
