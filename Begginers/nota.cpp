#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	float notaRead, Soma;
	int count;

	count = 0;
	Soma = 0;

	while(count < 2){

		scanf("%f", &notaRead);

		if((notaRead < 0) || (notaRead > 10)){
			printf("nota invalida\n");

		}else{

			Soma = Soma + notaRead;

			count++;


		}
	}

	Soma = Soma / count;

	printf("media = %.2f\n", Soma);
	
	return 0;
}