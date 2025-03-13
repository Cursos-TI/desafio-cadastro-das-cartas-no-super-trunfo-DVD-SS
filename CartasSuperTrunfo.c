#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta (Fortaleza)
    char estado1 [20] = "Estados";
    char complemento [20] = "unidos";
    char codigo1[4] = "C01";
    char nomeCidade1[50] = "Atlanta";
    int populacao1 = 498044;
    float area1 = 347.1;
    float pib1 = 385.50;
    int pontosTuristicos1 = 30;
    
    // Declaração de variáveis para a segunda carta (Londrina)
    char estado2[20] = "Paraná";
    char codigo2[4] = "D02";
    char nomeCidade2[50] = "Londrina";
    int populacao2 = 580870;
    float area2 = 1650.0;
    float pib2 = 26.14;
    int pontosTuristicos2 = 15;
    
    // Escolha do usuário
    int escolha;
    printf("\nEscolha uma carta para visualizar (1 para Fortaleza, 2 para Londrina): ");
    scanf("%d", &escolha);
    
    // Exibição da carta escolhida
    if (escolha == 1) {
        printf("\nCarta 1:\n");
        printf("Estado: %s %s\n",estado1, complemento);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    } else if (escolha == 2) {
        printf("\nCarta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    } else {
        printf("\nEscolha inválida!\n");
    }
    
    return 0;
}
