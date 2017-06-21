#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

/*

Author: Lucas Pereira
Exercise: 2164 - Fibbo
Status: 
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/2164

*/

int fibo(float num)
{
	double firstSection, secondSection, aboveSection, finalResult;

	firstSection = pow(((1 + sqrt(5))/2), double(num));
	secondSection= pow(((1 - sqrt(5))/2), double(num));
	aboveSection = firstSection - secondSection;
	finalResult = aboveSection/sqrt(5);

	return finalResult;	
				
}

int main(int argc, char const *argv[])
{
	int n;
	float formule;

	cin >> n;
	formule = fibo(float(n));
	printf("%.1lf \n", formule);

	return 0;
}
