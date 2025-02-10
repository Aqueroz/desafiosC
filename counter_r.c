#include <stdio.h>
#include <unistd.h>

int main()
{
    int counter;

    printf("Digite um tempo em segundos para a contagem regressiva: ");
    scanf("%d", &counter);

    while (counter >= 0)
    {

        printf("\r %d", counter);

        fflush(stdout);

        sleep(1);
        counter--;
    }

    printf("\n Contagem encerrada \n");

    return 0;
}