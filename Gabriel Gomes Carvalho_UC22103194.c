#include <stdio.h>
#import <math.h>

int main() {
	char questao;
	
	//Questao A
	double catetoOposto;
	double catetoAdjascente;
	double hipotenusa;
	double seno;
	
	//Questao B
	char nome[30];
	int ano;
	int bissexto;
	
	
	printf("Algoritmo e Programacao\n");
	printf("Joyce Siqueira\n");
	printf("Gabriel Gomes Carvalho\tUC22103194\tCiencia da Computacao\n");
	printf("Repositorio do Github: https://github.com/gabbgc/testeprova\n");
	printf("Software Utilizado: DevC++\n");
	printf("\nDigite a seguir qual questao voce deseja acessar(a letra da questao e maiuscula) : ");
	scanf("%c", &questao);
	fflush(stdin);
	
	switch(questao) {
		case 'A':			
			printf("\n\nA) Digite o cateto oposto : ");
			scanf("%lf", &catetoOposto);
			
			printf("\nDigite o cateto adjascente : ");
			scanf("%lf", &catetoAdjascente);
			
			hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjascente, 2));
			seno = catetoOposto / hipotenusa;
			
			printf("\nDados do triangulo:\n");
			printf("Seno: %lf\n", seno);
			printf("Hipotenusa: %lf\n", hipotenusa);
			
			break;
			
		case 'B':		
			printf("B) Digite seu nome e ano de nascimento e direi se esse e bissexto ou nao\n");
			
			printf("Nome : ");			
			scanf("%[^\n]s", &nome);
			fflush(stdin);
			
			printf("Ano : ");
			scanf("%d", &ano);
			
			//Checa se o ano esta entre 1900 e 2022
			if (ano < 1900 || ano > 2022) {
				printf("Ano de nascimento invalido\n");
				break;
			}
			
			if (ano % 4 == 0) {
				if (ano % 100 == 0) {
					if (ano % 400 == 0) {
						bissexto = 1;
					} 
					else {
						bissexto = 0;
					}
				}
				else {
					bissexto = 1;
				}
			}
			else {
				bissexto = 0;
			}
			
			if (bissexto == 1)
				printf("%s, %d e um ano bissexto", nome, ano);
			else
				printf("%s, %d nao e um ano bissexto", nome, ano);
			
			break;
		
		default:
			printf("Opcao Invalida");
			break;
	}
	
}
