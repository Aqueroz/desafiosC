#include <stdio.h>
#include <time.h>
#include <unistd.h>
//pra manipular as strings
#include <string.h>

int main()
{

    while (1)
    {
        time_t time_now;
        time(&time_now);

        // pegar a string do tempo real
        char *time_str = ctime(&time_now);

        // retira o "\n" que o time_t coloca por padrao
        time_str[strcspn(time_str, "\n")] = '\0';

        // %s porque se trata de uma string
        printf("\r %s", time_str);

        // faz o texto aparecer imediatamente
        fflush(stdout);

        sleep(1);
    }

    return 0;
};