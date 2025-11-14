#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ids_livros=0;
// Nós para estrutura de lista s
struct no{
    struct no* ultimo_no;
    char nome_livro[100];
    char autor[80];
    int id;
};

// Cabeça e cauda, para gerenciamento de listas
struct no* head = NULL;


void cadastrarLivro(){
    char nome_livro[100]; 
    char autor[80];
    struct no* novo_no;
    novo_no = malloc(sizeof(struct no));

    printf("%s","Digite o nome do livro a ser cadastrado: ");
    scanf(" %100[^\n]",nome_livro);
    printf("%s","\nDigite o autor do livro a ser cadastrado: ");
    scanf(" %80[^\n]",autor);

    novo_no->id = ids_livros++;
    novo_no->ultimo_no = head;

    strcpy(novo_no->nome_livro, nome_livro);
    strcpy(novo_no->autor, autor);

    head = novo_no;
    printf("%s","\nCadastrado com sucesso!");
}

void buscarLivro(){
    
}

// Constantes para a função ver livros
const int TAMANHO_INICIAL = 32;

void verLivros(){
    if (head==NULL){
        printf("%s","\nNenhum livro cadastrado!\n");
        return;
    }
     
    struct no* no_atual = head;
    printf("%s","\n---/ Registro dos livros /---\n\n");
    do{
        printf("\nID: %i",no_atual->id);
        printf("\nTítulo: %s",no_atual->nome_livro);
        printf("\nAutor: %s",no_atual->autor);
        printf("\n");
        no_atual = no_atual->ultimo_no;
    } while (no_atual != NULL);


}

int main(){
    int escolha = 0;
    while (1)
    {
        printf("%s", ":--- Registro de empréstimos ---: \n\n");
        printf("%s","1. Cadastrar livro\n2. Todos os livros\n3. Sair\n");
        scanf("%i",&escolha);
        if(escolha == 1){
            cadastrarLivro();            
        } 
        else if(escolha==2){
            verLivros();
        }
        else if(escolha==3){
            break;
        }
    }

    
    return 0;
} 