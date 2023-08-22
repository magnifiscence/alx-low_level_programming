#include "main.h"
#include <stdio.h>

int calculator(int num1, char operator, int num2)
{
	switch (operator) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			if (num2 != 0)
				return num1 / num2;
			else
				return (-1);
		case '%':
			if (num2 != 0)
				return num1 % num2;
			else
				return (-1);
		default:
			return (0);
	}
}

void print_number(int num)
{
	if (num <0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	int rev = 0;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}

int main()
{
	int num1, num2;
	char operator;

	_putchar('enter the first number: ');
	scanf("%d", &num1);
	_putchar('enter operator (+, -, *, /, %): ');
	scanf("%c", &operator);
	_putchar('enter second number: ');
	scanf("%d", &num2);

	int result = calculator(num1, operator, num2);
	print_number(result);

	return (0);
}
