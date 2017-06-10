#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	string coluna1, coluna2, coluna3;

	cin >> coluna1;
	cin >> coluna2;
	cin >> coluna3;

	if (coluna1 == "vertebrado" ){

			if(coluna2 == "ave"){
				if(coluna3 == "carnivoro"){
					printf("aguia\n");
				}else{
					printf("pomba\n");
				}

			}else{
				if(coluna3 == "onivoro"){
					printf("homem\n");
				}else{
					printf("vaca\n");
				}
			}

	}else{
				if(coluna2 == "inseto"){
					if(coluna3 == "hematofago"){
						printf("pulga\n");
					}else{
						printf("lagarta\n");
					}

				}else{
					if(coluna3 == "hematofago"){
						printf("sanguessuga\n");
					}else{
					printf("minhoca\n");
					}
				}
	}
	

return 0;
}
