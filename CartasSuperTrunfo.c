#include <stdio.h>

    int main() {
        // definindo as variáveis necessárias 
        char estado01, estado02, codigo_carta01[5], codigo_carta02[5], cidade01[30], cidade02[30];
        int pontos_turisticos01, pontos_turisticos02;
        float area01, area02, pib01, pib02, densidade_p1, pib_percapita1, densidade_p2, pib_percapita2;
        unsigned long int populacao01, populacao02;
        float superpoder01, superpoder02;
        superpoder01 = (float)(populacao01 + area01 + pib01 + pontos_turisticos01 + pib_percapita1 ) - densidade_p1;
        superpoder02 = (float)(populacao02 + area02 + pib02 + pontos_turisticos02 + pib_percapita2 ) - densidade_p2;

        //avisos

        printf("Aviso: ao colocar o dado 'Estado' insira uma letra de 'A' a 'H'\n");
        printf("Segundo aviso: no dado  'Código da carta' insira a letra do estado seguida de um numero de 01 a 04.\n ");
        printf("\nPorfavor insira os seguintes dados para a 1° carta:\n ");
        
        //dados da primeira carta

        printf("Estado: ");
        scanf("%c", &estado01);

        printf("Código da carta: ");
        getchar();
        scanf("%s", codigo_carta01);

        printf("Nome da cidade: ");
    
        //o fgets funciona como o scanf, porém lê o total de bytes do que o usuario escrever, incluindo o espaço.
        getchar();
        fgets(cidade01, sizeof(cidade01), stdin);

        printf("População: ");
        scanf("%lu", &populacao01);

        printf("Área(em km²): ");
        scanf("%f", &area01);

        printf("Pib: ");
        scanf("%f", &pib01);

        printf("Numero de Pontos Túristicos: ");
        scanf("%d", &pontos_turisticos01);
        
        printf("\nPorfavor insira os seguintes dados para a 2° carta:\n ");
        
        //dados da segunda carta

        printf("Estado: ");
        getchar();
        scanf("%c", &estado02);

        printf("Código da carta: ");
        getchar();
        scanf("%s", codigo_carta02);

        printf("Nome da cidade: ");
        getchar();
        fgets(cidade02, sizeof(cidade02), stdin);

        printf("População: ");
        getchar();
        scanf("%lu", &populacao02);

        printf("Área(em km²): ");
        scanf("%f", &area02);

        printf("Pib: ");
        scanf("%f", &pib02);

        printf("Numero de Pontos túristicos: ");
        scanf("%d", &pontos_turisticos02);

        densidade_p1 = (float)(populacao01 / area01);
        pib_percapita1 = (float)(pib01 / populacao01);

        densidade_p2 = (float)(populacao02 / area02);
        pib_percapita2 = (float)(pib02 / populacao02);


        printf("\n-----Primeira Carta-----\n");
        printf("Estado: %c\n", estado01);
        printf("Código da carta: %s\n", codigo_carta01);
        printf("Nome da cidade: %c\n", cidade01);
        printf("População: %lu\n", populacao01);
        printf("Àrea(em km²): %.2f\n", area01);
        printf("Pib: %.2f\n", pib01);
        printf("Numero de Pontos Túristicos: %d\n", pontos_turisticos01);
        printf("Densidade Populacional: %f\n", densidade_p1);
        printf("Pib per capita: %f\n", pib_percapita1);
        printf("Super poder: %d\n", superpoder01);

        printf("\n-----Segunda carta-----\n");

        printf("Estado: %c\n", estado02);
        printf("Código da carta: %s\n", codigo_carta02);
        printf("Nome da cidade: %s\n", cidade02);
        printf("População: %lu\n", populacao02);
        printf("Àrea(em km²): %.2f\n", area02);
        printf("Pib: %.2f\n", pib02);
        printf("Numero de Pontos Túristicos: %d\n", pontos_turisticos02);
        printf("Densidade Populacional: %f\n", densidade_p2);
        printf("Pib per capita: %f\n", pib_percapita2);
        printf("Super Poder: %d\n", superpoder02);
        
        printf("\n-----Duelo-----\n");

        printf("AVISO: resultados limitados a 1 ou 0, 1 significa que a carta 01 ganhou\n e apenas 0 significa vitoria da carta 02\n");

        printf("População, resultado: %d\n", populacao01 > populacao02);
        printf("Area, resultado: %d\n", area01 > area02);
        printf("Pib, resultado: %d\n", pib01 > pib02);
        printf("Pontos turisticos, resultado: %d\n", pontos_turisticos01 > pontos_turisticos02);
        printf("Densidade populacional, resultado: %d\n", densidade_p1 < densidade_p2);
        printf("Pib per capita, resultado: %d\n", pib_percapita1 > pib_percapita2);
        printf("Super poder, resultado: %d\n", superpoder01 > superpoder02);

        return 0;
    }