/*
-----------------------------------------------------------------------------------------------------------
1. Criar um TDA para uma lista ligada estática dos alunos de uma turma. Cada aluno está representado pela
matricula do aluno (um valor inteiro), o nome e a idade. A quantidade máxima de alunos em uma turma é 100.
Usar a matricula como chave.

Implementar e testar as seguintes operações sobre esse TDA:

•    Inicializar a lista.
•    Liberar a lista.
•    Retornar a quantidade de elementos válidos na lista.
•    Retornar se a lista está cheia.
•    Retornar se a lista está vazia.
•    Exibir os elementos da lista.
•    Inserir um elemento de forma ordenada (ascendente) na lista.
•    Excluir um elemento da lista pelo valor mantendo a lista ordenada.
•    Alterar o valor de uma matricula (de acordo ao valor) mantendo a lista ordenada.
-----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define MAX 100

int main()
{
    ListaAlunos lista;
    inicializarLista(&lista);

    Aluno aluno;

    for (int i = 0; i < MAX; i++)
    {
        printf("Insira a MATRICULA, NOME e IDADE do aluno %d, respectivamente. ", i+1);
        scanf("%d %s %d", &aluno.matricula, &aluno.nome, &aluno.idade);
        inserirAluno(&lista, aluno);
    }

    printf("\n[Lista inicial]\n");
    imprimirLista(&lista);

    printf("\nQtd. de elementos validos: %d", tamanhoLista(&lista));
    verificarLista(&lista);

    int antigaMatricula, novaMatricula;
    printf("\nInsira a matricula que deseja alterar e seu novo valor, respectivamente. ");
    scanf("%d %d", &antigaMatricula, &novaMatricula);

    alterarMatricula(&lista, antigaMatricula, novaMatricula);

    printf("\n[Lista apos alteracao]\n");
    imprimirLista(&lista);

    liberarLista(&lista);

    return 0;
}
