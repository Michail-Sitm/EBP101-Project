#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
        char seq[ 1000 ];
        int length, i;

	scanf("%s", seq);
	length = strlen(seq);

	for (i=0;  i < length; i++)
	{
		if ( seq[i] == 'R'|| seq[i] == 'D' || seq[i] == 'Q' || seq[i] == 'N' || seq[i] == 'E' || seq[i] == 'K' || seq[i] == 'H')
		{
			printf(" ");
		}

		 if ( seq[i] == 'S' || seq[i] == 'T' || seq[i] == 'G')
		{
                        printf(".");
                }
 		if ( seq[i] == 'A' || seq[i] == 'C' || seq[i] == 'M' || seq[i] == 'P')
                {
                        printf(":");
                }
		 if ( seq[i] == 'F' || seq[i] == 'I' || seq[i] == 'L' || seq[i] == 'V' || seq[i] == 'W' || seq[i] == 'Y')
                {
                        printf("*");
		}

	}

	printf("\n");
}

