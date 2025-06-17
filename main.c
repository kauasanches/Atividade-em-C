#include <stdio.h>

int main()
{
	char nome[10];
	int idade;
	double altura;
	float peso;
	char posicaoPrim[20];  // Corrigido para armazenar uma string
	int numCam;

	printf("Sistema de Cadastro de Jogadores\n\n");

	printf("Digite o nome do jogador: ");
	scanf("%s", nome);  // Corrigido o uso de scanf para o nome

	printf("Digite a idade do jogador: ");
	scanf("%d", &idade);

	printf("Digite a altura do jogador: ");
	scanf("%lf", &altura);

	printf("Digite o peso do jogador: ");
	scanf("%f", &peso);

	printf("Digite a posiC'C#o do jogador: ");
	scanf("%s", posicaoPrim);

	printf("Digite o nC:mero da camisa do jogador: ");
	scanf("%d", &numCam);

	printf("\nAbaixo terC#o as informaC'C5es cadastradas do jogador:\n\n");
	printf("Nome do jogador: %s\n", nome);
	printf("Idade do jogador: %d\n", idade);
	printf("Altura do jogador: %.2lf\n", altura);
	printf("Peso do jogador: %.2f\n", peso);
	printf("PosiC'C#o em que o jogador joga: %s\n", posicaoPrim);
	printf("NC:mero da camisa do jogador: %d\n\n", numCam);

	printf("Cadastro realizado com sucesso!\n");

	return 0;
}
