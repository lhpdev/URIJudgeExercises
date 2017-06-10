#include <stdio.h>

int main(){
	int N,i,fat,A;

	
	scanf("%d", &N);

	fat = N;

	for (int i = 0; i < (N-1); ++i)
	{
		A = i+1;
		fat = fat*(N - A);

	}

	printf("%d\n", fat);
	
	return 0;

}