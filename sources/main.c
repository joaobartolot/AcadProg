#include <stdio.h>

/*Prototipos em lib*/
#include "../lib/aluno.h"
#include "../lib/menu.h"
#include "../lib/validadores.h"

/* void cadastroAluno(struct aluno *cadastro); */

int main() {
    char input;

    do {
        input = menuInicial();

    } while (input != 'x' && input != 'X');

    /* struct aluno aluno1; */

    /* cadastroAluno(&aluno1); */

    /* printf("O nome do aluno eh %s\n",aluno1.nome); */
    /* printf("O cpf do aluno eh %s\n",aluno1.cpf); */
    /* printf("O telefone do aluno eh %s\n",aluno1.telefone); */
    /* printf("O email do aluno eh %s\n",aluno1.email); */

    return 0;
}

/* void cadastroAluno(struct aluno *cadastro){*/
/* 	printf("<------- CADASTRO DO ALUNO ------->\n");*/

/* 	printf("digite o nome do aluno:");*/
/* 	gets(cadastro->nome); // ponteiro*/

/* 	printf("digite o Cpf do aluno:");*/

/* 	gets(cadastro->cpf); // ponteiro*/

/* 	printf("digite o Telefone do aluno:");*/

/* 	gets(cadastro->telefone); // ponteiro*/

/* 	printf("digite o Email do aluno:");*/

/* 	gets(cadastro->email); // ponteiro*/

/* 	 talvez usar getchar(); a partir do segundo gets*/
/* }*/