#include <stdio.h>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	
	int X,Y,i,sum,sumX,sumY,auxX, auxY;

	scanf("%d" , &X);
	scanf("%d" , &Y);

	sum = 0;
	sumX = 0;
	sumY= 0;

	if (( X < 0) && (Y < 0)){ // OK

		auxX = -X;
		auxY = -Y;

		if( auxX > auxY){

			for (int i = (auxY + 1); i < auxX; ++i)
			{
				if ( i%2 != 0){
				sum = sum + i;
				}
			}

		}else{

			for (int i = (auxX + 1); i < auxY; ++i)
			{
				if ( i%2 != 0){
				sum = sum + i;
				}
			}
		}

		printf("%d\n",-sum);
	
	}

	if ((X > 0) && (Y >0)){ // OK

		if( X > Y){

			for (int i = (Y + 1); i < X; ++i)
			{
				if ( i%2 != 0){
				sum = sum + i;
				}
			}

		}else{

			for (int i = (X + 1); i < Y; ++i)
			{
				if ( i%2 != 0){
				sum = sum + i;
				}
			}
		}
		printf("%d\n",sum);
	}

	if ((X > 0) && (Y < 0)){

		auxY = -Y;


		for (int i = 0; i < X; ++i)
		{
			if ( i%2 != 0){
				sumX = sumX + i;
			}
		}

		for (int i = 0; i < auxY; ++i)
		{
			if ( i%2 != 0){
				sumY = sumY + i;
			}
		}

		printf("%d\n",sumX -sumY);

	}

	if ((X < 0) && (Y > 0)){
		auxX = -X;

		for (int i = 0; i < auxX; ++i)
		{
			if ( i%2 != 0){
				sumX = sumX + i;
			}
		}

		for (int i = 0; i < Y; ++i)
		{
			if ( i%2 != 0){
				sumY = sumY + i;
			}
		}
		
		printf("%d\n",sumY - sumX);

	}

	return 0;
}