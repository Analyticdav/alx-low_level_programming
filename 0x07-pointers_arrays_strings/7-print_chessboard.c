#include "main.h"
/**
 * print_chessboard - The functtion to print_chessboard
 * @a: The character to test
 */
void print_chessboard(char (*a)[8])
{
int p, q;

for (p = 0; p < 8; p++)
{
for (q = 0; q < 8; q++)
{
_putchar(a[p][q]);
}
_putchar('\n');
}
}
