#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int i,j;

	j = 60;
	i = 1;

	while(j >= 0){
		printf("I=%d J=%d\n", i,j);
		i = i + 3;
		j = j - 5;

	}
	return 0;
}