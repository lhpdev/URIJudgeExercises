#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,i;
	long int vetor[45];

	vetor[0] = 0;
	vetor[1] = 1;



	scanf("%d" , &N);

	for (int i = 2; i < N; ++i)
	{
		vetor[i] = vetor [i-2] + vetor[i-1];
		
	}

		for (int i = 0; i < N; ++i)
			{
			printf("%ld", vetor[i]);
			if (i < (N - 1)){
				printf(" ");
			}else{
				printf("\n");
			}
		}


	




	return 0;
}