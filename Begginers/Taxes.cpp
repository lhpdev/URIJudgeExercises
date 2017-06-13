#include <stdio.h>


//Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/1051

int main(int argc, char const *argv[])
{
	float valueRead, valueUnder2thousand, valueOver2thousand, taxApplied, valueOver3thousand, valueOver4thousand,finalAmount; 


	scanf("%f", &valueRead);

	if (valueRead < 2000.01) {
		printf("Isento\n");

	}else{

		if(	(valueRead > 2000) && (valueRead < 3000.01)){


		valueOver2thousand = valueRead - 2000;
		taxApplied = valueOver2thousand*0.08;
		printf("R$ %.2f\n", taxApplied);


		}else{

			if(	(valueRead > 3000) && (valueRead < 4500.01)	){
				valueOver3thousand = valueRead - 3000;
				taxApplied = 1000*0.08 + valueOver3thousand * 0.18;
				printf("R$ %.2f\n", taxApplied);


			}else{
				valueOver4thousand = valueRead - 4500;
				taxApplied = 1000*0.08 + 1500*0.18 + valueOver4thousand*0.28;
				printf("R$ %.2f\n", taxApplied);

			}
		}
	}



	return 0;
}