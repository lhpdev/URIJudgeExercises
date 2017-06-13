#include <stdio.h>

/*

Author: Lucas Pereira
Exercise: Array Fill 1
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/

*/

#define ArraySize 		10

int main(int argc, char const *argv[])
{
	int array[ArraySize], i = 0;

	scanf("%d", &array[i]);
	i++;

	for (int i = 1; i < ArraySize; ++i)
	{
		array[i] = 2*array[i -1];
	}

	for (int i = 0; i < ArraySize; ++i)
	{
		printf("N[%d] = %d\n", i, array[i]);
	}






	return 0;
}