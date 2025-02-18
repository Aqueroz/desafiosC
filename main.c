#include <stdio.h>

int main(void) {

    int input1;
    int input2;
    char operation;

    printf("Calculadora simples \n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &input1);

    printf("Selecione a operação matematica: \n + \n - \n * \n / \n");
    scanf("%s", &operation);

    printf("Digite o segundo numero: ");
    scanf("%d", &input2);

    switch (operation) {
        case '+':
            printf("Resultado = %d\n", input1 + input2);
            break;
        case '-':
            printf("Resultado = %d\n", input1 - input2);
            break;
        case '*':
            printf("Resultado = %d\n", input1 * input2);
            break;
        case '/':
            printf("Resultado = %d\n", input1 / input2);
            break;
    }

    return 0;
}