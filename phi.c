#include <stdio.h>
int phi(long int n)
{
	int count = 1; // 1 bo liczba 1 jest wzglednie pierwsza dla n
	int i = 2;
	if (n < 2)
		return -1;
	do {
	    int a = n;
	    int b = i;
		while (a != b)
		{
			if (a < b)
			b = b - a;
			else
			a = a - b;
		}
		//printf("%i %i \n", i, a);
		if (a == 1)
			count = count + 1;
		i = i + 1;	
	} while (i < n);
	return count;	
}

