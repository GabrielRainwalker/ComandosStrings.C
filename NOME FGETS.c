#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	
	printf("Digite o seu nome:  ");
	fgets(nome, sizeof(nome), stdin); // scanf substituto
	
	printf("Seu nome �:  %s\n", nome);
	
	return 0;
}
