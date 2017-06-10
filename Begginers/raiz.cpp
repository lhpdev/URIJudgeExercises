#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	float a,b,c,r1,r2,raiz;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	raiz = (b*b) - (4*a*c);


	if((raiz < 0) || (a <= 0)){

		printf("Impossivel calcular\n");

	}else{

	r1 = (-b + (sqrt(raiz)))/(2*a);
	r2 = (-b - (sqrt(raiz)))/(2*a);

	printf("R1 = %.5f\n", r1);
	printf("R2 = %.5f\n", r2);

	}

	return 0;

}
