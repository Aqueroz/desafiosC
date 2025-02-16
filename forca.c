#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    //vidas
    int life = 3;

    //palavras possiveis
    char *dic[] = {"abacaxi", "cinema", "ventilador", "biblioteca", "cavaleiro", "tesouro", "espiral", "labirinto"};

    //numero aleatorio para a escolha das palavras
    srand(time(NULL));
    int word = rand() % 8 ;

    char *word_selected = dic[word];

    int word_size = strlen(word_selected);

    //criando um array pras letras descobertas
    char word_letter[word_size + 1];
    for (int i = 0; i < word_size; i++) {
        word_letter[i] = '_'; //precisa ser as aspas simples
    }
    //para terminar a string de forma certa
    word_letter[word_size] = '\0';

    int leter_hi = word_size;

    printf("Bem vindo ao Jogo da Forca, voce tem 3 vidas \n Boa sorte");
    printf("A palavra tem: %d letras\n", word_size);

   while (leter_hi > 0) {

       printf("\n Palavras: %s \n", word_letter);

       char letter;

       printf(" \n Digite uma letra: ");
       scanf(" %c", &letter);

       int found = 0;


       for (int i = 0; i < word_size; i++) {
           if (word_selected[i] == letter && word_letter[i] == '_') {
               word_letter[i] = letter;
               leter_hi--;
               found = 1;
           }
       }

       if (found) {
           printf(" Encontrado %c \n", letter);
       } else if (life == 0) {
           printf(" Voce perdeu \n");
           break;
       } else {
           life--;
           printf("Nao encontrado \n");
           printf("Voce perdeu 1 vida, restam %d", life);

       }
   }

    if (life > 0) {
        printf("\n Parabens, voce descobriu a palavra \n %s", word_selected);
    }

    return 0;
}
