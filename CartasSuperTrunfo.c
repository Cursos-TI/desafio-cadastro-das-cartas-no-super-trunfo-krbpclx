#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Kayck

int main() {
    char estado [20];
    char estado2 [20];
    char codigo [20];
    char codigo2 [20];
    char nome [20];
    char nome2 [20];
    int populacao, populacao2, turisticos, turisticos2;
    float area, area2, pib, pib2;
   
    // Inseri as variaveis das cidades, não coloquei os char na mesma linha, optei por deixar assim para mais clareza e as diferenciando com numeros para melhor organização.

    //Obtenção de dados da Carta 01

    printf("Bem vindo ao Desafio Super Trunfo! Insira os dados da Carta 01\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", &estado);

    printf("Digite a letra do Estado seguida de um número de 01 a 04(ex: F01, D03): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos);

    // Obtenção de dados da Carta 02

    printf("Muito bem! Agora insira os dados da carta 02\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04(ex: F01, D03): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos2);

    printf("\n");
    // Após todas as linhas de obtenção de dados, comecei a impressão dos dados.

    printf("Aqui estão os dados de suas cartas:\n");
    printf("\n");

    printf("Carta 01:\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Numero de habitantes: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turisticos: %d\n", turisticos);

    printf("\n");
    printf("Carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Numero de habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    


    return 0;
}
