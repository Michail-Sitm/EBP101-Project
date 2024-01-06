#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
        char seq[ 1000 ];
        int length, i=0, count=0 ;

	while (scanf("%s", seq) == 1)
		{
			count = 0;
			length = strlen( seq );
			for (i=0 ; i < length ; i++ )
			{
				if ( seq[i] == 'G'|| seq[i] == 'C')
				{
					count++;
				}
			}

	printf("The GC content of the sequence is %f\n", (100.0*count)/(length) );
		}
}

