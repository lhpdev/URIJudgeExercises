#include <stdio.h>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
	int N, X, nIn, nOut;
	nIn = 0;
	nOut = 0;

	scanf("%d", &N);

	while(N > 0){
		scanf("%d" ,&X);
		if ((X > 9) && (X<21)){
			nIn ++;
		}else{
			nOut++;
		}

		N--;
	}

	printf("%d in\n", nIn);
	printf("%d out\n", nOut);

	return 0;
}