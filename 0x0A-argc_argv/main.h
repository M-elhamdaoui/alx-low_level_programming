#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int _putchar(char c);
/**
 * _atoi - convert char to int
 * @s: string
 * Return: returns a value
 */
int _atoi(char *s);
int StringCheck(char *s);
/**
 * _isdigit - checks if it is digit
 * @c: character to check
 *
 * Return: returns boolean
 */
int _isdigit(int c);
#endif /* MAIN_H */
