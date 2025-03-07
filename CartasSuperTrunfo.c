#include <stdio.h>

int main() {

    // Variáveis Cidade 1

    // variáveis de texto
    char estadoc1;
    char codigoc1[10];
    char cidade1[30];

    // integers são apenas números inteiros. ocupam menos espaço.
    int populacaoc1;
    int pontostc1;

    // float armazena números decimais, com precisão menor que as de um double. ocupa mais espaço.

    float areac1;
    float pibc1;

    // Variáveis Cidade 2

    char estadoc2;
    char codigoc2[10];
    char cidade2[30];

    int populacaoc2;
    int pontostc2;

    float areac2;
    float pibc2;

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
    printf ("Insira um código para a carta, utilizando a letra do Estado( %c) e três números (Ex: A123)\n", estadoc1);
    scanf ("%s", codigoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável populacaoc1
    printf ("Insira a população total da cidade (Apenas o número)\n");
    scanf ("%d", &populacaoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável areac1
    printf ("Insira a área total da cidade (Apenas o número)\n");
    scanf ("%f", &areac1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pibc1
    printf ("Insira o PIB Total da cidade: (Apenas o número)\n");
    scanf ("%f", &pibc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pontostc1
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc1);

    /*     Com todos os dados armazenados em suas respectivas variáveis, utiliza-se o printf para imprimir
    as informações no terminal      */
    printf ("\n\n\nCarta 1\n\n");
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("Estado: %c\n", estadoc1);
    printf ("Código da Carta: %s\n", codigoc1);
    printf ("População: %d habitantes\n", populacaoc1);
    //utiliza-se %.2f para reduzir os decimais após o float. Um número como 1.1111 vai mostrar apenas 1.11
    printf ("Área da cidade: %.2f km²\n", areac1);
    printf ("PIB da cidade: %.2f bilhões\n", pibc1);
    printf ("Número de Pontos Turísticos: %d\n\n\n", pontostc1);

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
    printf ("Insira o PIB Total da cidade: (Apenas o número)\n");
    scanf ("%f", &pibc2);

    // pontos turisticos da cidade
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc2);

    // Imprime no Terminal os dados da Cidade 2, completando o exercicio
    printf ("\n\n\nCarta 2\n\n");
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("Estado: %c\n", estadoc2);
    printf ("Código da Carta: %s\n", codigoc2);
    printf ("População: %d de habitantes\n", populacaoc2);
    printf ("Área da cidade: %.2f km²\n", areac2);
    printf ("PIB da cidade: %.2f bilhões\n", pibc2);
    printf ("Número de Pontos Turísticos: %d\n", pontostc2);

    // encerra o programa
    return 0;

}