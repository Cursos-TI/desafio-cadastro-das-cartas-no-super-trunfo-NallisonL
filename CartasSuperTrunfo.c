#include <stdio.h>

struct Cidade {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
  
void cadastrarCidade(Cidade* cidade) {
    printf("|----- DESAFIO SUPER TRIUNFO PAISES  --------|\n");
    
    printf("Digite o código da cidade (ex: A01):\n ");
    scanf("%s", cidade->codigo);
    printf("Digite o nome da cidade:\n ");
   // printf("\n");
    scanf("%s", cidade->nome);
    printf("Digite a população da cidade: \n");
   // printf("\n");
    scanf("%d", &cidade->populacao);
    printf("Digite a área da cidade (km²): \n");
   // printf("\n");
    scanf("%f", &cidade->area);
    printf("Digite o PIB da cidade:\n ");
   // printf("\n");
    scanf("%f", &cidade->pib);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &cidade->pontosTuristicos);
}

void exibirDados(const Cidade* cidade) {
    printf("\nDados da Cidade:\n");
    printf("Código: %s\n", cidade->codigo);
    printf("Nome: %s\n", cidade->nome);
    printf("População: %d habitantes\n", cidade->populacao);
    printf("Área: %.2f km²\n", cidade->area);
    printf("PIB: R$%.2f\n", cidade->pib);
    printf("Pontos Turísticos: %d\n", cidade->pontosTuristicos);
}

int main() {
    const int NUM_CIDADES = 32; 
    Cidade cidades[NUM_CIDADES];

    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("\nCadastro da Cidade %d\n", i + 1);
        cadastrarCidade(&cidades[i]);
    }

    printf("\n\nDados das Cidades Cadastradas:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        exibirDados(&cidades[i]);
    }

    return 0;
}

 
