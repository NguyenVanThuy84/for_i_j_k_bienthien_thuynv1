#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,k;
	i =0;
	printf ("Dien so thu tu. so hang: ");
	scanf ("%d",&i);
	printf ("\n");
	for (j =0; j <i;j ++)
	{
		printf ("\n");
		for (k =0; k <= j; k++)
		{
			printf ("*");
		}
	}
	return 0;
}
