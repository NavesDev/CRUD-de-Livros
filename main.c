#include <stdio.h>

struct no{
    struct no* ultimo_no;
    char* nome_livro;
    char* nome_usuario;
};

struct no* head;

void cadastrarEmprestimo(){
    char nome_livro[50];
    char nome_usuario[50];
    struct no* novo_no;
    novo_no = malloc(sizeof(struct no));

    printf("%s","Digite o nome do livro a ser emprestado: ");
    scanf("%s",nome_livro);
    printf("%s","\nDigite o nome do usuário que irá pegar o livro emprestado: ");
    scanf("%s",nome_usuario);

    novo_no->ultimo_no = head;
    novo_no->nome_livro = nome_livro;
    novo_no->nome_usuario = nome_usuario;
    head = novo_no;
}

int main(){
    int escolha = 0;
    while (1)
    {
        printf("%s", ":--- Registro de empréstimos ---: \n\n");
        printf("%s","1. Consultar empréstimos\n2. Cadastrar empréstimos\n3. Sair\n");
        scanf("%i",&escolha);
        if(escolha == 1){
            cadastrarEmprestimo();
        } else if (escolha == 2){

        }
    }
    
    
    return 0;
} 