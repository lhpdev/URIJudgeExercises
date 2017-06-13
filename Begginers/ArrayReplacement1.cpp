#include <stdio.h>

/*Author: Lucas Pereira

Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/1172

*/

#define ArraySize 		10

int main(int argc, char const *argv[])
{
	int arrayRead[ArraySize],i = 0;

	for (int i = 0; i < ArraySize; ++i)
	{
		scanf("%d", &arrayRead[i]);
		if( (arrayRead[i] == 0) || (arrayRead[i] < 0 )){
			arrayRead[i] = 1;
		}
	}

	for (int i = 0; i < ArraySize; ++i)
	{
		printf("X[%d] = %d\n", i, arrayRead[i]);
	}






	return 0;
}