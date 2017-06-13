#include <stdio.h>

/*

Author: Lucas Pereira
Exercise: 1174 - Array Fill 1
Status: Wrong Answer 60%
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/

*/

#define ReadTimes 		100

int main(int argc, char const *argv[])
{
	int i = 0, j =0;
	float readingVariable, array[ReadTimes], modNumber;

	for (int i = 0; i < ReadTimes; ++i)
	{
		scanf("%f" , &readingVariable);
		if(readingVariable < 0){
			modNumber = 0 - readingVariable;

		}else{
			modNumber = readingVariable;
		}

		if(modNumber < 10.1){
			array[j] = readingVariable;
			j++;
		}
	}

	for (int i = 0; i < j; ++i)
	{
		printf("A[%d] = %.1f\n", i, array[i]);
	}

	return 0;
}