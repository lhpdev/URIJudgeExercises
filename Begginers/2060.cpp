#include <stdio.h>
#include <iostream>

using namespace std;

/*

Author: Lucas Pereira
Exercise: 1175 - Array Change 1
Status: 
Link to the problem description: https://www.urionlinejudge.com.br/judge/en/problems/view/2060

*/

void checkMult(int num,int *a,int *b,int *c,int *d) //function to check if the number read is multiple 
														//of 2 , 3 , 4 or 5.
{
	if((num%2) == 0) *a++;
	if((num%3) == 0) *b++;
	if((num%4) == 0) *c++;
	if((num%5) == 0) *d++;

};

void printOutPut(int num1,int num2,int num3,int num4) // printing the outPut
{
	cout << num1 <<	" Multiplo(s) de 2" << endl;
	cout << num2 <<	" Multiplo(s) de 2" << endl;
	cout << num3 <<	" Multiplo(s) de 2" << endl;
	cout << num3 <<	" Multiplo(s) de 2" << endl;

};

int main(int argc, char const *argv[])
{
	int listSize;
	int i, mult2 = 0, mult3=0, mult4=0, mult5=0;

	cin >> listSize;

	int *array = new int[listSize];

	for (int i = 0; i < listSize; ++i)
	{
		cin >> array[i];
		checkMult(array[i], &mult2, &mult3,&mult4,&mult5);
	}

	printOutPut(mult2,mult3,mult4,mult5);


	delete [] array;
	return 0;
}





