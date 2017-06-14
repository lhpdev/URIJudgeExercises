#include <stdio.h>
#include <string>
#include <iostream>

//Exercicio para entender como trabalhar com Chacacteres e Strings


using namespace std;

int main(int argc, const char * argv[]){
	char letra;

	cin >> letra;

	switch ( letra ){
		case 'A':
			cout << letra << endl;
			break;
		default:
			cout << "Nao eh A" << endl;
	}

}