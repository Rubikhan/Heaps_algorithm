#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define JEB 4

int g_i;
int *g_num_array;

int qwe_factorial(int a)
{
	if (a == 0)
		return (1);
	else
		return(a * qwe_factorial(a - 1));
}

void iarrr(int *arr)
{
	int i;
	i = 0;

	while ( i < JEB )
	{
		printf("%d", arr[i]);
		i++;
	}

	printf("\n");
}

void zoom_zoom(int *a, int *z) 
 { 
	 int temp = *a;
	 *a = *z;
	 *z = temp;
 } 

int  *gebaited(int n, int *arr)
{

	while(g_i < n)
	{
		if (g_num_array[g_i] < g_i)
		{
			if ((g_i % 2) == 0)
				zoom_zoom(&arr[0], &arr[g_i]);
			else 
				zoom_zoom(&arr[g_num_array[g_i]], &arr[g_i]); 
			g_num_array[g_i] += 1;
			g_i = 0;

			return(arr);

		}
		else
		{
			g_num_array[g_i] = 0;
			g_i += 1;
		}
	}
	return (0);
}

int main(void)
{

	int qwe = qwe_factorial(JEB);
	printf("facto: %d\n", qwe);

	g_i = 0;	

	int *arrr;
	arrr = malloc(sizeof(int) * JEB);
	g_num_array = malloc(sizeof(int) * JEB);

	while (g_i < JEB)
	{
		arrr[g_i] = g_i;
		g_num_array[g_i] = 0;
		g_i++;
	}
	g_i = 0;

	for(int j = 0; j < qwe - 1; j++) // -1 because 1234 [first case] doesn't get printed
	{
	arrr = gebaited(JEB , arrr);
	iarrr(arrr);
	}

	return (26);

}
