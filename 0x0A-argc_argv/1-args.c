#include "main.h"

/**
 * main - print thr number of arguuments passed to the program
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[]);
{
(void) argv;/*ignore argv */
printf("%d\n", argc - 1);

return (0);
}
