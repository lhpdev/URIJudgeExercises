//Practing to use functions
#include <iostream>
using namespace std;

void printNumber(int c) //sending parameter by value
{
	cout << "Number: " << c << endl;
}



void addition(int a, int b)
{
	int soma;
	soma = a + b;
	printNumber(soma);
}



int main(int argc, char const *argv[])
{
	int a,b;

	cin >> a;
	cin >> b;
	printNumber(a);
	printNumber(b);
	addition(a,b);
	
	return 0;
}