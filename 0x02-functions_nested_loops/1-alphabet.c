#include "main.h"

/**
 * char - prints letters of the alphabet
 * in lower case letters
 * Description: print letters of the alphabet in lower case
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}
