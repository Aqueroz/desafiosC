
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int input;

    srand(time(NULL));
    int ran_num = (rand() % 3) + 1;

    printf("Escolha entre: \n Pedra (1) \n Papel (2) \n Tesoura (3) \n ");
    scanf("%d", &input);

    int result = input - ran_num;

    if (result == 0) {
        printf("Você escolheu %d e o computador %d \n", input, ran_num);
        printf("Empate \n");
    } else if (result == 1) {
        printf("Você escolheu %d e o computador %d \n", input, ran_num);
        printf("Você ganhou \n");
    } else {
        printf("Você escolheu %d e o computador %d \n", input, ran_num);
        printf("Você perdeu \n");
    }

    return 0;
}