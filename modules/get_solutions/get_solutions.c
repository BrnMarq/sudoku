#include <stdio.h>

int *get_solutions(int items[])
{
	static int solutions[9];
	int aux, cont = 0;
	
	for(int i = 0; i < 9 ; i++)
	{
		for(int j = i; j < 9; j++)
		{
			if((i+1) == items[j])
			{
				cont = 1;
			}
			if(items[i] > items[j])
			{
				aux = items[i];
				items[i] = items[j];
				items[j] = aux;
			}
		}
		if(!cont)
		{
			solutions[i] = i+1;
		}
		else
		{
			solutions[i] = 0;
		}
		cont = 0;
	}
	return solutions;
}

