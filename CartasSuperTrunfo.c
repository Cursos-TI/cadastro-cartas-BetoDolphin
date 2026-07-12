#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char nome[20];
  int populacao;
  float area;
  float PIB;
  // Área para entrada de dados
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    printf("O nome da cidade é: %s\n", nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("A área da cidade é: %f\n", area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("O PIB da cidade é: %f\n", PIB);

  // Área para exibição dos dados da cidade
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);

/*
printf("formato1 %formato2 %formato3", variavel1 variavel2, variavel3)

%d: Imprime um inteiro no formato decimal
%i: Equivalente a %d
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/

return 0;
} 
