#include <stdio.h>

int main() {
    // Variáveis Cidade 1

    // variáveis de texto
    char estadoc1;
    char codigoc1[4];
    char cidade1[30];

    // integers são apenas números inteiros. ocupam menos espaço.
    unsigned int populacaoc1;
    int pontostc1;

    // float armazena números decimais, com precisão menor que as de um double. ocupa mais espaço.

    float areac1;
    float pibc1;
    float reservac1;
    float pibPerCapitaC1;
    float densidadePopC1;
    float superpoderc1;

    // Variáveis Cidade 2

    char estadoc2;
    char codigoc2[10];
    char cidade2[30];

    unsigned int populacaoc2;
    int pontostc2;

    float areac2;
    float pibc2;
    float pibPerCapitaC2;
    float reservac2;
    float densidadePopC2;
    float superpoderc2;

    // Inserir dados da Carta 1

    /*    Utiliza a função scanf para registrar o nome da primeira cidade na Var cidade1
    strings não necessitam de & na frente    */
    printf ("Insira o nome de uma Cidade (Apenas uma palavra)\n");
    scanf ("%s", cidade1);
    
    // Utiliza a função scanf para registrar a letra que represente o estado na variável estadoc1
    printf ("Insira o Estado (Apenas uma letra): \n");
    scanf (" %c", &estadoc1);

    /*    Utiliza a função scanf para registrar a letra que represente o estado na variável codigoc1
    strings não necessitam de & na frente     */
    printf ("Insira um código para a carta, utilizando a letra do Estado( %c) e dois números (Ex: A01)\n", estadoc1);
    scanf ("%s", codigoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável populacaoc1
    printf ("Insira a população total da cidade (Apenas o número)\n");
    scanf ("%d", &populacaoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável areac1
    printf ("Insira a área total da cidade (Apenas o número)\n");
    scanf ("%f", &areac1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pibc1
    printf ("Insira o PIB Total da cidade: (Apenas o número em bilhões, ex: 22.32 bilhões)\n");
    scanf ("%f", &pibc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pontostc1
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc1);

    // Faz o calculo da Densidade Populacional da Carta 1

    densidadePopC1 = (float) populacaoc1 / areac1; 

    // Faz o calculo do PIB per Capita
    
    reservac1 = pibc1 * 1000000000;
    pibPerCapitaC1 = (float) reservac1 / populacaoc1;

    // Faz o calculo do super poder

    superpoderc1 = (float) populacaoc1 + areac1 + pibc1 + pibPerCapitaC1 + pontostc1 - densidadePopC1;

    /*     Com todos os dados armazenados em suas respectivas variáveis, utiliza-se o printf para imprimir
    as informações no terminal      */
    printf ("\n\n\nCarta 1\n\n");
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("Estado: %c\n", estadoc1);
    printf ("Código da Carta: %s\n", codigoc1);
    printf ("População: %d habitantes\n", populacaoc1);
    //utiliza-se %.2f para reduzir os decimais após o float. Um número como 1.1111 vai mostrar apenas 1.11
    printf ("Área da cidade: %.2f km²\n", areac1);
    printf ("Densidade Populacional: %.2f\n", densidadePopC1);
    printf ("PIB da cidade: %.2f bilhões\n", pibc1);
    printf ("PIB per Capita: %.2f reais\n", pibPerCapitaC1);
    printf ("Número de Pontos Turísticos: %d\n", pontostc1);
    printf ("Super Poder desta carta é: %.2f\n\n\n", superpoderc1);

    // Inserir dados da Carta 2

    /*     para evitar cluttering, todas as informações acima de aplicam a carta 2, apenas modificando 
    a variável para a versão correspondente da carta 2    */

    // nome da cidade
    printf ("Insira o nome de outra cidade, diferente da anterior: \n");
    scanf ("%s", cidade2);
    
    // inicial do estado
    printf ("Insira o Estado: \n");
    scanf (" %c", &estadoc2);

    // código da carta
    printf ("Insira o código da carta, diferente da anterior:\n");
    scanf ("%s", codigoc2);

    // nro da população
    printf ("Insira a população total da cidade (Apenas o número)\n");
    scanf ("%d", &populacaoc2);

    // area total da cidade
    printf ("Insira a área total da cidade (Apenas o número)\n");
    scanf ("%f", &areac2);

    // pib da cidade
    printf ("Insira o PIB Total da cidade: (Apenas o número em bilhões, ex: 22.15 bilhões)\n");
    scanf ("%f", &pibc2);

    // pontos turisticos da cidade
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc2);

    // Faz o calculo da Densidade Populacional da Carta 1

    densidadePopC2 = (float) populacaoc2 / areac2; 

    // Faz o calculo do PIB per Capita

    reservac2 = pibc2 * 1000000000;
    pibPerCapitaC2 = (float) reservac2 / populacaoc2;

    superpoderc2 = (float) populacaoc2 + areac2 + pibc2 + pibPerCapitaC2 + pontostc2 - densidadePopC2;

    // Imprime no Terminal os dados da Cidade 2, completando o exercicio
    printf ("\n\n\nCarta 2\n\n");
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("Estado: %c\n", estadoc2);
    printf ("Código da Carta: %s\n", codigoc2);
    printf ("População: %d de habitantes\n", populacaoc2);
    printf ("Área da cidade: %.2f km²\n", areac2);
    printf ("Densidade Populacional: %.2f\n", densidadePopC2);
    printf ("PIB da cidade: %.2f bilhões\n", pibc2);
    printf ("PIB per Capita: %.2f reais\n", pibPerCapitaC2);
    printf ("Número de Pontos Turísticos: %d\n\n\n\n\n", pontostc2);
    printf ("Super Poder desta carta é: %.2f\n\n\n\n", superpoderc2);

    printf ("Hora do Resultado!\n");


    printf ("População: %d\n", populacaoc1 > populacaoc2);
    printf ("Área %d\n", areac1 > areac2);
    printf ("Densidade %d\n", densidadePopC1 < densidadePopC2);
    printf ("PIB %d\n", pibc1 > pibc2);
    printf ("PIB per Capita: %d\n", pibPerCapitaC1 > pibPerCapitaC2);
    printf ("Pontos turísticos: %d\n", pontostc1 > pontostc2);
    printf ("Super Poder: %d\n\n", superpoderc1 > superpoderc2);

        /*if (populacaoc1 > populacaoc2){
            printf ("População: Carta 1 vence!\n");}
            else {
            printf ("População: Carta 2 vence!\n");}

         if (areac1 > areac2){
            printf ("Área: Carta 1 vence!\n");}
           else {
            printf ("Área: Carta 2 vence!\n");}

        if (densidadePopC1 < densidadePopC2){
             printf ("Densidade: Carta 1 vence!\n");}
            else {
             printf ("Densidade: Carta 2 vence!\n");}

        if (pibc1 > pibc2){
             printf ("PIB: Carta 1 vence!\n");}
             else {
             printf ("PIB: Carta 2 vence!\n");}

        if (pibPerCapitaC1 > pibPerCapitaC2){
            printf ("PIB per Capita: Carta 1 vence!\n");}
            else {
            printf ("PIB per Capita: Carta 2 vence!\n");}

        if (pontostc1 > pontostc2){
            printf ("Pontos Turisticos: Carta 1 vence!\n");}
            else {
            printf ("Pontos Turisticos: Carta 2 vence!\n");}

        if (superpoderc1 > superpoderc2){
            printf ("Super poder: Carta 1 vence!\n");}
            else {
            printf ("Super poder: Carta 2 vence!\n");}*/
    // encerra o programa
    return 0;

}