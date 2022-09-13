#include <_putchar.h>

/**
 * main - prints "_putchar"
 *
 * Return : Always 0 .
 */
int main(void)
{
	char *message = "__putchar";
	int i = 0;

	do {
		_putchar(message[i++]);
	} while (message[i] != '\0');
	_putchar('\n');

	return (0);
}
