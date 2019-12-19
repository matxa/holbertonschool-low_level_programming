#include "math_func_header.h"

/**
 * add - adds two numbers
 * @num1: number
 * @num2: number
 * Return: addition
 *
 */

int add(int num1, int num2)
{
	int addition = num1 + num2;

	num1 = 89;
	num2 = 9;

	return (addition);
}

/**
 * sub - subtraction function
 * @a: num
 * @b: num
 * Return: subtraction
 *
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplication function
 * @a: num
 * @b: num
 * Return: multiplication
 *
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Division function
 * @a: num
 * @b: num
 * Return: Division
 *
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - modulo function
 * @a: num
 * @b: num
 * Return: remainder
 *
 */

int mod(int a, int b)
{
	return (a % b);
}
