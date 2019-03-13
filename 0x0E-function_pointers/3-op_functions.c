#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - a + b
 * @a: first number
 * @b: second number
 *
 * Return: result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 * @a: first number
 * @b: second number
 *
 * Return: result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - result of a * b
 * @a: first number
 * @b: second number
 *
 * Return: result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - result of a / b
 * @a: first number
 * @b: second number
 *
 * Return: result of the operation
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	exit (100);
}

/**
 * op_mod - modulo of a / b
 * @a: first number
 * @b: second number
 *
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	exit (100);
}
