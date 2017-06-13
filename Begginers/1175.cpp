#include <stdio.h>

/*

Author: Lucas Pereira
Exercise: 1175 - Array Change 1
Status: 
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/1175

*/

#define ReadTimes 		20

int main(int argc, char const *argv[])
{
	int i = 0, j =0, aux, array[ReadTimes];

	for (int i = 0; i < ReadTimes; ++i)
	{
		scanf("%d", &aux);
		array[ReadTimes - (i + 1)] = aux;
	}

	for (int i = 0; i < ReadTimes; ++i)
	{
		printf("N[%d] = %d\n", i, array[i]);
	}

	return 0;
}