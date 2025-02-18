#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, estado2;
    char nome, nome2 [50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;
   
    // Inseri as variaveis das cidades juntos para melhor organização

    printf("Bem vindo ao Desafio Super Trunfo! Insira os dados da Carta 01\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%c", &estado);

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

    // Comandos para obtenção de dados da Primeira carta separadamente e agora faço a divisão para melhor clareza e organização!

    printf("Muito bem! Agora insira os dados da Carta 02\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", estado2);

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

    // Após obtenção dos dados, fazer a impressão das duas cartas

    printf("Estado: %c", estado);
    printf("Nome da cidade: %s", nome);

    



    




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
