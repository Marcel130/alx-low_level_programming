/*
 * File: 0-putchar.c
 * Auth: Ostian Stéphane ostian1996
 */
#include "main.h"
/**
 * main - This code prints _putchar
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
