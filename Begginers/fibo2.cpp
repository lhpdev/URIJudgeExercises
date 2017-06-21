#include <stdio.h>
#include <iostream>

using namespace std;

/*

Author: Lucas Pereira
Exercise: 2164 - Fibbo
Status: 
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/2164

*/

int fibo(int num)
{
		return (((((1 + sqrt(5))/2)^num - ((1 - sqrt(5))/2)^num) )/ sqrt(5));
}

int main(int argc, char const *argv[])
{
	int n;
	float formule;

	cin >> n;
	formule = fibo(n);

	return 0;
}
