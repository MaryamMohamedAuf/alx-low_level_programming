#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	count = 0;
	while (c < strlen(str)) /*count string*/

	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int c;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (c < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[c]))

		{
			str_to_int = atoi(argv[c]);
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum);

	return (0);
}

