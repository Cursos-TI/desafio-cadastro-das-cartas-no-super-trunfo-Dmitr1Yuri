#include <stdio.h>

    int main() {
        // definindo as variáveis necessárias 
        char estado01, estado02, codigo_carta01[5], codigo_carta02[5], cidade01[30], cidade02[30];
        int populacao01, populacao02, pontos_turisticos01, pontos_turisticos02;
        float area01, area02, pib01, pib02;

        //avisos

        printf("Aviso: ao colocar o dado 'Estado' insira uma letra de 'A' a 'H'\n");
        printf("Segundo aviso: no dado  'Código da carta' insira a letra do estado seguida de um numero de 01 a 04.\n ");
        printf("Porfavor insira os seguintes dados para a 1° carta:\n ");
        
        //dados da primeira carta

        printf("Estado: ");
        scanf("%c", &estado01);

        printf("Código da carta: ");
        scanf("%s", codigo_carta01);

        printf("Nome da cidade: ");
    
        //o fgets funciona como o scanf, porém lê o total de bytes do que o usuario escrever, incluindo o espaço.
        getchar();
        fgets(cidade01, sizeof(cidade01), stdin);

        printf("População: ");
        scanf("%d", &populacao01);

        printf("Área(em km²): ");
        scanf("%f", &area01);

        printf("Pib: ");
        scanf("%f", &pib01);

        printf("Numero de Pontos Túristicos: ");
        scanf("%d", &pontos_turisticos01);
        
        printf("Porfavor insira os seguintes dados para a 2° carta:\n ");
        
        //dados da segunda carta

        printf("Estado: ");
        getchar();
        scanf("%c", &estado02);

        printf("Código da carta: ");
        scanf("%s", codigo_carta02);

        printf("Nome da cidade: ");
        getchar();
        fgets(cidade02, sizeof(cidade02), stdin);

        printf("População: ");
        getchar();
        scanf("%d", &populacao02);

        printf("Área(em km²): ");
        scanf("%f", &area02);

        printf("Pib: ");
        scanf("%f", &pib02);

        printf("Numero de Pontos túristicos: ");
        scanf("%d", &pontos_turisticos02);

        printf("\n-----Primeira Carta-----\n");
        printf("Estado: %c\n", estado01);
        printf("Código da carta: %s\n", codigo_carta01);
        printf("Nome da cidade: %s\n", cidade01);
        printf("População: %d\n", populacao01);
        printf("Àrea(em km²): %.2f\n", area01);
        printf("Pib: %.2f\n", pib01);
        printf("Numero de Pontos Túristicos: %d\n", pontos_turisticos01);

        printf("\n-----Segunda carta-----\n");

        printf("Estado: %c\n", estado02);
        printf("Código da carta: %s\n", codigo_carta02);
        printf("Nome da cidade: %s\n", cidade02);
        printf("População: %d\n", populacao02);
        printf("Àrea(em km²): %.2f\n", area02);
        printf("Pib: %.2f\n", pib02);
        printf("Numero de Pontos Túristicos: %d\n", pontos_turisticos02);

        
        return 0;
    }