#include <stdio.h>
#include <iostream>
using namespace std;

/*

Author: Lucas Pereira
Exercise: 1183- Above the Main Diagonal
Status: 
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/1183

*/

#define MatrixSize 12

int main(int argc, char const *argv[])
{
	int i = 0, j =0, count = 0;
	float Matrix[MatrixSize][MatrixSize], sum = 0;
	char operation;

	cin >> operation;

	for (int i = 0; i < MatrixSize; ++i){
		for (int j = 0; j < MatrixSize; ++j)
		{
			scanf("%f" , &Matrix[i][j]);

			if ( j > i){
				sum = sum + Matrix[i][j];
				count++;
				//printf("Elemento [%d][%d] = %.1f foi somado\n", i, j, Matrix[i][j]);
			}
		}
	}


	/*for (int i = 0; i < MatrixSize; ++i){
		for (int j = 0; j < MatrixSize; ++j)
		{
		printf("%.0f 	" , Matrix[i][j]);
		} printf("\n");
	}*/



	switch (operation)
	{
		case 'S':
		printf("%c\n" , operation);
		printf("%.1f\n", sum);
		//printf("Media: %.1f\n", (sum/count));
		break;

		default:
		printf("%.1f\n", (sum/count));

	}

	return 0;
}