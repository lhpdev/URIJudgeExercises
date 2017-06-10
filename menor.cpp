#include <stdio.h>

int main(){
	int N,i,menor,posicao;

	scanf("%d", &N);

	int array[N];


	for (int i = 0; i < N; ++i)
	{
		

		scanf("%d", &array[i]);

		if(i == 0){
			menor = array[i];
			posicao = i;
		}

		if(menor > array[i]){
			menor = array[i];
			posicao = i;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	return 0;
}