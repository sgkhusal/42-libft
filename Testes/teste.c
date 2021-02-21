#include <stdio.h>

/* Imprime a tabela com os caracteres ASCII de 32 a 254 */
/* Para o Linux, nao imprime a partir do 127 */

int	main()
{
	unsigned char i;
	for (i = 32; i < 255; i++)
		printf("\ndecimal = %3d * hexadecimal = %2d * caracter = %1c", i, i, i);
}
