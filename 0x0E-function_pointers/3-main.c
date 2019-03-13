#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - operates two numbers
 * @argc: Counter of inputs
 * @argv: inputs in string
 *
 * Return: result of the operation
 */
int main(int argc, char *argv[])
{
	op_t operate;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/*	if (argv[2][1] == '\0')*/
	operate.op = argv[2];
	operate.f = get_op_func(operate.op);
	if (operate.f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = operate.f(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
