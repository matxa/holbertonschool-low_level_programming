#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition function
 * @a: num
 * @b: num
 * Return: sum
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: num
 * @b: num
 * Return: subtraction
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: num
 * @b: num
 * Return: multiplication
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: num
 * @b: num
 * Return: Division
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: num
 * @b: num
 * Return: remainder
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
