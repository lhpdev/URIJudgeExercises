#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
	double amountMoney, valorAtual;
	int numeroCedulas, numeroMoedas;



	scanf("%lf", &amountMoney);
	numeroCedulas = 0;
	valorAtual = amountMoney;

	printf("NOTAS:\n");

	numeroCedulas = amountMoney/100;
	printf("%d nota(s) de R$ 100.00\n", numeroCedulas);
	amountMoney = amountMoney - numeroCedulas*100;

	numeroCedulas = amountMoney/50;
	printf("%d nota(s) de R$ 50.00\n", numeroCedulas);

	amountMoney = amountMoney - numeroCedulas*50;
	numeroCedulas = amountMoney/20;
	printf("%d nota(s) de R$ 20.00\n", numeroCedulas);

	amountMoney = amountMoney - numeroCedulas*20;

	numeroCedulas = amountMoney/10;
	printf("%d nota(s) de R$ 10.00\n", numeroCedulas);

	amountMoney = amountMoney - numeroCedulas*10;

	numeroCedulas = amountMoney/5;
	printf("%d nota(s) de R$ 5.00\n", numeroCedulas);

	amountMoney = amountMoney - numeroCedulas*5;

	numeroCedulas = amountMoney/2;
	printf("%d nota(s) de R$ 2.00\n", numeroCedulas);

	amountMoney = amountMoney - numeroCedulas*2;

	printf("MOEDAS:\n");
	amountMoney = amountMoney*100;
	numeroMoedas = amountMoney/100;
	printf("%d moeda(s) de R$ 1.00\n", numeroMoedas);

	amountMoney = amountMoney - numeroMoedas*100;

	numeroMoedas = amountMoney/50;
	printf("%d moeda(s) de R$ 0.50\n", numeroMoedas);

	amountMoney = amountMoney - numeroMoedas*50;

	numeroMoedas = amountMoney/25;
	printf("%d moeda(s) de R$ 0.25\n", numeroMoedas);

	amountMoney = amountMoney - numeroMoedas*25;

	numeroMoedas = amountMoney/10;
	printf("%d moeda(s) de R$ 0.10\n", numeroMoedas);

	amountMoney = amountMoney - numeroMoedas*10;

	numeroMoedas = amountMoney/5;
	printf("%d moeda(s) de R$ 0.05\n", numeroMoedas);

	amountMoney = amountMoney - numeroMoedas*5;

	printf("%d moeda(s) de R$ 0.01\n", (int)amountMoney);

	return 0;
}