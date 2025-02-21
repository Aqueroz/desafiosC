#include <stdio.h>
#include <string.h>

//definir identificadores par um macro, substitui o valor antes da compilacao, podendo ser comdefinicao (expressao), ou parametros (parametros)
#define MAX_BOOKS 10
#define MAX_LENGTH 100

void addBook(char book_list[MAX_BOOKS][MAX_LENGTH], int *pos) {
    if (*pos >= MAX_BOOKS) {
        printf("A lista esta cheia e não é possivel adicionar novos livros \n");
        return;
    }

    printf("Digite o nome do livro: ");

    //diferente do scanf, o fgets pega todo o texto e não apenas a primeira palavra
    fgets(book_list[*pos], MAX_LENGTH, stdin);
    book_list[*pos][strcspn(book_list[*pos] ,"\n")] = '\0';

    printf("Livro adicionado \n");
    (*pos)++;
}

void books(char book_list[MAX_BOOKS][MAX_LENGTH], int pos) {
    if ( pos == 0) {
        printf("Nenhum livro cadastrado \n \n");
        return;
    }

    printf("Livros cadstrados: \n");
    for (int i = 0; i < pos; i++) {
        printf("%d %s\n", i + 1,  book_list[i]);
    }

}

//** pois estamos alterando uma stringe precisamos modificar o ponteiro
void choice( int opt,char book_list[MAX_BOOKS][MAX_LENGTH], int *pos) {
    if (opt == 1) {
        books(book_list, *pos);
    } else if (opt == 2) {
        addBook(book_list, pos);
    } else {
        printf("Opção invalida\n");
    }

}

int main(void) {

    char book_list[MAX_BOOKS][MAX_LENGTH];
    int option;
    int position = 0;

    while (1){
        printf("\n1 - Consultar livros cadastrados \n");
        printf("2 - Adicionar um livro \n");
        printf("3 - Sair \n");
        printf("Escola uma opcao: ");
        scanf("%d",&option);
        getchar(); // limpar o buffer

        if (option == 3) {
            printf("Saindo");
            break;
        }

        choice(option, book_list, &position);

    }
    return 0;
}